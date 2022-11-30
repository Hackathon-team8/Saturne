
#ifndef __CS_LES_INFLOW_H__
#define __CS_LES_INFLOW_H__

/*============================================================================
 * Turbulent inflow generation
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

#include "cs_defs.h"

/*----------------------------------------------------------------------------
 *  Local headers
 *----------------------------------------------------------------------------*/

#include "cs_base.h"
#include "cs_zone.h"

/*----------------------------------------------------------------------------*/

BEGIN_C_DECLS

/*============================================================================
 * Macro definitions
 *============================================================================*/

/*============================================================================
 * Type definitions
 *============================================================================*/

/*----------------------------------------------------------------------------
 * Type of synthetic turbulence generation
 *----------------------------------------------------------------------------*/

typedef enum {

  CS_INFLOW_LAMINAR,  /*!< Laminar fluctuations (i.e no fluctuation) */
  CS_INFLOW_RANDOM,   /*!< Gaussian random fluctuation */
  CS_INFLOW_BATTEN,   /*!< Fluctuations generated by the Batten method */
  CS_INFLOW_SEM       /*!< Fluctuations generated by the
                           Synthetic Eddy Method */

} cs_les_inflow_type_t;

/*=============================================================================
 * Local Structure Definitions
 *============================================================================*/

/* Inlet definition */
/*------------------*/

typedef struct _cs_inlet_t   cs_inlet_t;

typedef struct {

  int           n_structures;  /*!< Number of coherent structures */
  int           volume_mode;   /*!< Indicator to use classic inlet SEM (0)
                                    or volumic SEM over the domain */
  cs_real_3_t  *position;      /*!< Position of the structures */
  cs_real_3_t  *energy;        /*!w Anisotropic energy of the structures */

} cs_inflow_sem_t;

/*=============================================================================
 * Public function prototypes for Fortran API
 *============================================================================*/

/*----------------------------------------------------------------------------
 * General synthetic turbulence generation
 *----------------------------------------------------------------------------*/

void CS_PROCF(synthe, SYNTHE)
(
 const cs_real_t *const ttcabs,    /* --> current physical time               */
 const cs_real_t        dt[],      /* --> time step                           */
       cs_real_t        rcodcl[]   /* <-> boundary conditions array           */
);

/*=============================================================================
 * Public function prototypes
 *============================================================================*/

/*----------------------------------------------------------------------------*/
/*!
 * \brief Creation of structures for the LES inflows
 */
/*----------------------------------------------------------------------------*/

void
cs_les_inflow_initialize(void);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Finalize turbulent inflow generation API.
 */
/*----------------------------------------------------------------------------*/

void
cs_les_inflow_finalize(void);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Add an inlet definition for synthetic turbulence inflow generation.
 *
 *  \remark:
 *  - eps_r is used only for CS_INFLOW_BATTEN and CS_INFLOW_SEM types.
 *  - Strictly positive values are required for k_r and eps_r.
 *  - Finer definition of the statistics of the flow at the inlet
 *    can be done later using \ref cs_user_les_inflow_advanced.
 *
 * \param[out]  type         type of inflow method at the inlet
 * \param[out]  volume_mode  if true, generate turbulence over the whole domain
 *                           (only if type is CS_INFLOW_SEM)
 * \param[in]   zone         pointer to associated boundary zone
 * \param[out]  n_entities   number of structures or modes
 * \param[out]  verbosity    verbosity level
 * \param[out]  vel_r        reference mean velocity
 * \param[out]  k_r          reference turbulent kinetic energy
 * \param[out]  eps_r        reference turbulent dissipation
 */
/*----------------------------------------------------------------------------*/

void
cs_les_inflow_add_inlet(cs_les_inflow_type_t   type,
                        bool                   volume_mode,
                        const cs_zone_t       *zone,
                        int                    n_entities,
                        int                    verbosity,
                        const cs_real_t       *vel_r,
                        cs_real_t              k_r,
                        cs_real_t              eps_r);

/*----------------------------------------------------------------------------
 * Read the restart file of les inflow module.
 *----------------------------------------------------------------------------*/

void
cs_les_synthetic_eddy_restart_read(void);

/*----------------------------------------------------------------------------
 * Write the restart file of les inflow module.
 *----------------------------------------------------------------------------*/

void
cs_les_synthetic_eddy_restart_write(void);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Generation of synthetic turbulence via the Synthetic Eddy Method (SEM).
 *
 * \param[in]   n_points            local number of points where
 *                                  turbulence is generated
 * \param[in]   elt_ids             local id of inlet elements
 * \param[in]   point_coordinates   point coordinates
 * \param[in]   point_weight        point weights (surface, volume or NULL)
 * \param[in]   initialize          initialization indicator
 * \param[in]   verbosity           verbosity level
 * \param[in]   inflow              pointer to structure for Batten method
 * \param[in]   t_cur               current time
 * \param[in]   vel_m_l             mean velocity at each point
 * \param[in]   rij_l               reynolds stresses at each point
 * \param[in]   eps_l               dissipation rate at each point
 * \param[out]  fluctuations        velocity fluctuations at each point
 */
/*----------------------------------------------------------------------------*/

void
cs_les_synthetic_eddy_method(cs_lnum_t           n_points,
                             const cs_lnum_t     elt_ids[],
                             const cs_real_3_t   point_coordinates[],
                             const cs_real_t    *point_weight,
                             int                 initialize,
                             int                 verbosity,
                             cs_inflow_sem_t    *inflow,
                             cs_real_t           t_cur,
                             const cs_real_3_t   vel_m_l[],
                             const cs_real_6_t   rij_l[],
                             const cs_real_t     eps_l[],
                             cs_real_3_t         fluctuations[]);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Rescale fluctuations by statistics following the Lund method.
 *
 * One assumes that the statistics are interlaced and ordered as follows:
 *   <u'u'>  <v'v'>  <w'w'>  <u'v'>  <v'w'>  <u'w'>
 *
 * \param[in]       n_points      local number of points where
 *                                turbulence is generated
 * \param[in]       statistics    statistics (i.e. Reynolds stresses)
 * \param[in, out]  fluctuations  velocity fluctuations generated
 *----------------------------------------------------------------------------*/

void
cs_les_rescale_fluctuations(cs_lnum_t          n_points,
                            const cs_real_6_t  statistics[],
                            cs_real_3_t        fluctuations[]);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Set number of structures used for volume SEM when
 *        restarting from another turbulence model.
 *
 * By default, a restart file is read if present, and a checkpoint written.
 * If not read, synthetic fluctuations are re-initialized.
 *
 * \param[in]  n_structures  number of structures for initialization
 */
/*----------------------------------------------------------------------------*/

void
cs_les_synthetic_eddy_set_n_restart_structures(int  n_structures);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Return number of structures used for volume SEM when
 *        restarting from another turbulence model.
 *
 * \return   number of structures for initialization
 */
/*----------------------------------------------------------------------------*/

int
cs_les_synthetic_eddy_get_n_restart_structures(void);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Query behavior of the LES inflow module in case of restart.
 *
 * See \ref cs_les_synthetic_eddy_set_restart for details.
 *
 * \param[out]  allow_read   pointer to read flag, or NULL
 * \param[out]  allow_write  pointer to write flag, or NULL
 */
/*----------------------------------------------------------------------------*/

void
cs_les_inflow_get_restart(bool  *allow_read,
                          bool  *allow_write);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Define behavior of the LES inflow module in case of restart.
 *
 * By default, a restart file is read if present, and a checkpoint written.
 * If not read, synthetic fluctuations are re-initialized.
 *
 * \param[in]  allow_read   allow reading a relevant checkpoint if present
 * \param[in]  allow_write  allow writing a relevant checkpoint if present
 */
/*----------------------------------------------------------------------------*/

void
cs_les_inflow_set_restart(bool  allow_read,
                          bool  allow_write);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Define parameters of synthetic turbulence at LES inflow.
 */
/*----------------------------------------------------------------------------*/

void
cs_user_les_inflow_define(void);

/*----------------------------------------------------------------------------*/
/*!
 * \brief Update of the characteristics of a given synthetic turbulence inlet.
 *
 * \param[in]   zone       pointer to associated boundary zone
 * \param[out]  vel_r      reference mean velocity
 * \param[out]  k_r        reference turbulent kinetic energy
 * \param[out]  eps_r      reference turbulent dissipation
 */
/*----------------------------------------------------------------------------*/

void
cs_user_les_inflow_update(const cs_zone_t  *zone,
                          cs_real_t         vel_r[3],
                          cs_real_t        *k_r,
                          cs_real_t        *eps_r);

/*----------------------------------------------------------------------------
 * Definition of mean velocity, Reynolds stresses and dissipation rate
 * for each boundary face of the given synthetic turbulence inlet.
 *----------------------------------------------------------------------------*/

void
cs_user_les_inflow_advanced(const cs_zone_t  *zone,
                            cs_real_3_t       vel_l[],
                            cs_real_6_t       rij_l[],
                            cs_real_t         eps_l[]);

/*----------------------------------------------------------------------------*/

END_C_DECLS

#endif /* __CS_LES_INFLOW_H__ */