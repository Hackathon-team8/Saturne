#ifndef _ECS_CHAMP_DEF_H_
#define _ECS_CHAMP_DEF_H_

/*============================================================================
 *  Prototypes des fonctions
 *   associees a la structure `ecs_table_t' decrivant un table
 *   et propres aux tables principaux de type "definition"
 *============================================================================*/

/*
  This file is part of code_saturne, a general-purpose CFD tool.

  Copyright (C) 1998-2022 EDF S.A.

  This program is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free Software
  Foundation; either version 2 of the License, or (at your option) any later
  version.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.

  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc., 51 Franklin
  Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

/*----------------------------------------------------------------------------*/

/*============================================================================
 *                                 Visibilite
 *============================================================================*/


/*----------------------------------------------------------------------------
 *  Fichiers `include' librairie standard C
 *----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
 *  Fichiers `include' publics  du  paquetage global "Utilitaire"
 *----------------------------------------------------------------------------*/

#include "ecs_def.h"
#include "ecs_tab.h"


/*----------------------------------------------------------------------------
 *  Fichiers `include' publics  des paquetages visibles
 *----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------
 *  Fichiers `include' publics  du  paquetage courant
 *----------------------------------------------------------------------------*/

#include "ecs_table.h"


/*============================================================================
 *                       Prototypes de fonctions publiques
 *============================================================================*/

/*----------------------------------------------------------------------------
 *  Fonction qui r??alise le tri des types g??om??triques
 *  La fonction affiche le nombre d'??l??ments par type g??om??trique
 *----------------------------------------------------------------------------*/

ecs_tab_int_t
ecs_table_def__trie_typ(ecs_table_t  *this_table_def,
                        int           dim_elt);

/*----------------------------------------------------------------------------
 *  Fonction qui construit
 *   les d??finitions des faces par d??composition des tables des cellules
 *----------------------------------------------------------------------------*/

void
ecs_table_def__decompose_cel(ecs_table_t  *vect_table_fac[],
                             ecs_table_t  *table_def_cel);

/*----------------------------------------------------------------------------
 *  Fonction qui realise la fusion des definitions des elements
 *----------------------------------------------------------------------------*/

ecs_tab_int_t
ecs_table_def__fusionne(ecs_table_t    *this_table_def,
                        size_t         *nbr_elt_cpct,
                        ecs_tab_int_t  *signe_elt);

/*----------------------------------------------------------------------------
 *  Fonction qui construit la liste des cellules attach??es ?? une liste
 *  de faces fournie en argument.
 *----------------------------------------------------------------------------*/

ecs_tab_int_t
ecs_table_def__liste_cel_fac(const size_t          nbr_fac,
                             ecs_table_t          *table_def_cel,
                             const ecs_tab_int_t   liste_fac);

/*----------------------------------------------------------------------------
 *  Fonction qui remplace les r??f??rences ?? des ??l??ments
 *  en des r??f??rences ?? d'autres ??l??ments li??s aux premiers
 *  par un tableau de renum??rotation qui peut ??tre sign??.
 *----------------------------------------------------------------------------*/

void
ecs_table_def__remplace_ref(ecs_table_t    *table_def,
                            ecs_tab_int_t  *tab_old_new);

/*----------------------------------------------------------------------------
 *  Fonction qui construit un tableau de booleens conforme a une liste
 *   de sous-elements
 *  Un sous-element est a `true'
 *   s'il intervient dans la definition des elements
 *----------------------------------------------------------------------------*/

void
ecs_table_def__cree_masque(bool          sselt_select[],
                           ecs_table_t  *table_def_elt);

/*----------------------------------------------------------------------------
 * Suppression des sommets ne participant pas ?? la connectivit??
 *  et mise ?? jour de la connectivit??.
 *----------------------------------------------------------------------------*/

void
ecs_table_def__nettoie_nodal(size_t        *n_vertices,
                             ecs_coord_t  **vtx_coords,
                             ecs_table_t   *table_def_fac,
                             ecs_table_t   *table_def_cel);

/*----------------------------------------------------------------------------
 *  Correction si n??cessaire de l'orientation des ??l??ments en connectivit??
 *   nodale. L'argument liste_cel_err est optionnel.
 *----------------------------------------------------------------------------*/

void
ecs_table_def__orient_nodal(ecs_coord_t     *vtx_coords,
                            ecs_table_t     *table_def_fac,
                            ecs_table_t     *table_def_cel,
                            ecs_tab_int_t   *liste_cel_err,
                            bool             correc_orient);

/*----------------------------------------------------------------------------
 *  Fusion des sommets confondus d'apr??s la longueur des ar??tes des faces.
 * La connectivit?? des faces est mise ?? jour.
 *----------------------------------------------------------------------------*/

void
ecs_table_def__nettoie_som_fac(size_t        *n_vertices,
                               ecs_coord_t  **vtx_coords,
                               ecs_table_t   *table_def_fac);

/*----------------------------------------------------------------------------
 *  Fonction qui supprime les ??ventuelles faces d??g??n??r??es
 *----------------------------------------------------------------------------*/

ecs_tab_int_t
ecs_table_def__nettoie_fac(ecs_table_t  *table_def_fac);

/*----------------------------------------------------------------------------
 *  Fonction qui renvoie un tableau associant un type ?? chaque face, sous
 * forme de masque : 0 pour face isol??e, 1 ou 2 pour face de bord (1 si
 * cellule avec cette face normale sortante, 2 si cellule avec cette face
 * normale entrante), 1+2 = 3 pour face interne, et 4 ou plus pour tous
 * les autres cas, correspondant ?? une erreur de connectivit?? (+4 pour faces
 * voyant au moins deux cellules avec face normale sortante, +8 pour faces
 * voyant au moins deux cellules avec face normale entrante).
 *
 *  Le type de chaque face pourra ??tre modifi?? ult??rieurement en fonction
 * des informations de p??riodicit??.
 *----------------------------------------------------------------------------*/

ecs_tab_int_t
ecs_table_def__typ_fac_cel(ecs_table_t  *table_def_cel,
                           ecs_table_t  *table_def_fac);

/*----------------------------------------------------------------------------
 *  Fonction qui renvoie un tableau associant un type ?? chaque face les
 * num??ros des cellules d??finies par cette face (normale sortante,
 * puis normale entrante). On affecte une valeur 0 lorsqu'il n'y a pas de
 * cellule correspondante directe (la p??riodicit?? n'est donc pas prise en
 * compte ?? ce niveau).
 *
 * On suppose que la coh??rence du maillage a d??j?? ??t?? v??rifi??e et
 * qu'aucune face n'appartient ?? plus d'une cellule par c??t??.
 *----------------------------------------------------------------------------*/

ecs_tab_int_t
ecs_table_def__fac_cel(ecs_table_t  *table_def_cel,
                       ecs_table_t  *table_def_fac);

/*----------------------------------------------------------------------------*/

#endif /* _ECS_TABLE_DEF_H_ */
