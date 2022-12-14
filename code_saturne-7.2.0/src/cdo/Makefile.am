## Process this file with automake to produce Makefile.in

#-------------------------------------------------------------------------------

# This file is part of code_saturne, a general-purpose CFD tool.
#
# Copyright (C) 1998-2022 EDF S.A.
#
# This program is free software; you can redistribute it and/or modify it under
# the terms of the GNU General Public License as published by the Free Software
# Foundation; either version 2 of the License, or (at your option) any later
# version.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
# details.
#
# You should have received a copy of the GNU General Public License along with
# this program; if not, write to the Free Software Foundation, Inc., 51 Franklin
# Street, Fifth Floor, Boston, MA 02110-1301, USA.

#-------------------------------------------------------------------------------

# PLE dependency

if HAVE_INTERNAL_PLE
  CPPFLAGS_PLE = -I$(top_srcdir)/libple/src -I$(top_builddir)/libple
else
  CPPFLAGS_PLE = $(PLE_CPPFLAGS)
endif

# Main part

AM_CPPFLAGS = \
-I$(top_srcdir)/src/alge \
-I$(top_srcdir)/src/bft  \
-I$(top_srcdir)/src/fvm  \
-I$(top_srcdir)/src/base \
-I$(top_srcdir)/src/mesh \
-I$(top_srcdir)/src/turb \
$(CPPFLAGS_PLE) $(MPI_CPPFLAGS)

AM_CFLAGS = $(CFLAGS_DBG) $(CFLAGS_OPT)

AM_LDFLAGS =

# Conditionally compiled files relying on PETSc/MUMPS libraries

libcscdo_extension_la_CPPFLAGS =\
-I$(top_srcdir)/src/alge \
-I$(top_srcdir)/src/bft  \
-I$(top_srcdir)/src/fvm  \
-I$(top_srcdir)/src/base \
-I$(top_srcdir)/src/mesh \
-I$(top_srcdir)/src/turb \
$(CPPFLAGS_PLE) \
$(PETSC_CPPFLAGS) $(MUMPS_CPPFLAGS) \
$(MPI_CPPFLAGS)

# Public header files (to be installed)

pkginclude_HEADERS = \
cs_advection_field.h \
cs_basis_func.h \
cs_cdo_advection.h \
cs_cdo_assembly.h \
cs_cdo_bc.h \
cs_cdo_blas.h \
cs_cdo_connect.h \
cs_cdo_diffusion.h \
cs_cdo_field_interpolation.h \
cs_cdo_local.h \
cs_cdo_main.h \
cs_cdo_quantities.h \
cs_cdo_solve.h \
cs_cdo_system.h \
cs_cdo_toolbox.h \
cs_cdo_turbulence.h \
cs_cdoeb_priv.h \
cs_cdoeb_vecteq.h \
cs_cdofb_ac.h \
cs_cdofb_monolithic.h \
cs_cdofb_monolithic_priv.h \
cs_cdofb_monolithic_sles.h \
cs_cdofb_navsto.h \
cs_cdofb_predco.h \
cs_cdofb_priv.h \
cs_cdofb_scaleq.h \
cs_cdofb_vecteq.h \
cs_cdovb_scaleq.h \
cs_cdovb_scalsys.h \
cs_cdovb_priv.h \
cs_cdovb_vecteq.h \
cs_cdovcb_scaleq.h \
cs_dbg.h \
cs_domain.h \
cs_domain_op.h \
cs_domain_setup.h \
cs_enforcement.h \
cs_equation.h \
cs_equation_bc.h \
cs_equation_builder.h \
cs_equation_param.h \
cs_equation_priv.h \
cs_equation_system.h \
cs_equation_system_param.h \
cs_equation_system_sles.h \
cs_evaluate.h \
cs_flag.h \
cs_gwf.h \
cs_gwf_param.h \
cs_gwf_priv.h \
cs_gwf_soil.h \
cs_gwf_tracer.h \
cs_hho_builder.h \
cs_hho_scaleq.h \
cs_hho_vecteq.h \
cs_hho_stokes.h \
cs_hodge.h \
cs_iter_algo.h \
cs_maxwell.h \
cs_mesh_deform.h \
cs_navsto_coupling.h \
cs_navsto_param.h \
cs_navsto_sles.h \
cs_navsto_system.h \
cs_param_cdo.h \
cs_property.h \
cs_quadrature.h \
cs_reco.h \
cs_saddle_itsol.h \
cs_scheme_geometry.h \
cs_sdm.h \
cs_solid_selection.h \
cs_solidification.h \
cs_source_term.h \
cs_static_condensation.h \
cs_thermal_system.h \
cs_walldistance.h \
cs_xdef.h \
cs_xdef_cw_eval.h \
cs_xdef_eval.h \
cs_cdo_headers.h

# Library source files

noinst_LTLIBRARIES = libcscdo.la
libcscdo_la_SOURCES = \
cs_advection_field.c \
cs_basis_func.c \
cs_cdo_advection.c \
cs_cdo_assembly.c \
cs_cdo_bc.c \
cs_cdo_blas.c \
cs_cdo_connect.c \
cs_cdo_diffusion.c \
cs_cdo_field_interpolation.c \
cs_cdo_local.c \
cs_cdo_main.c \
cs_cdo_quantities.c \
cs_cdo_solve.c \
cs_cdo_system.c \
cs_cdo_toolbox.c \
cs_cdo_turbulence.c \
cs_cdoeb_vecteq.c \
cs_cdofb_monolithic.c \
cs_cdofb_navsto.c \
cs_cdofb_scaleq.c \
cs_cdofb_vecteq.c \
cs_cdofb_priv.c \
cs_cdovb_scaleq.c \
cs_cdovb_scalsys.c \
cs_cdovb_vecteq.c \
cs_cdovcb_scaleq.c \
cs_dbg.c \
cs_domain.c \
cs_domain_op.c \
cs_domain_setup.c \
cs_enforcement.c \
cs_equation.c \
cs_equation_bc.c \
cs_equation_builder.c \
cs_equation_param.c \
cs_equation_system.c \
cs_equation_system_param.c \
cs_evaluate.c \
cs_flag.c \
cs_gwf.c \
cs_gwf_priv.c \
cs_gwf_soil.c \
cs_gwf_tracer.c \
cs_hho_builder.c \
cs_hho_scaleq.c \
cs_hho_vecteq.c \
cs_hho_stokes.c \
cs_hodge.c \
cs_iter_algo.c \
cs_maxwell.c \
cs_mesh_deform.c \
cs_navsto_coupling.c \
cs_navsto_system.c \
cs_property.c \
cs_quadrature.c \
cs_reco.c \
cs_saddle_itsol.c \
cs_scheme_geometry.c \
cs_sdm.c \
cs_solid_selection.c \
cs_solidification.c \
cs_source_term.c \
cs_static_condensation.c \
cs_thermal_system.c \
cs_walldistance.c \
cs_xdef.c \
cs_xdef_cw_eval.c \
cs_xdef_eval.c

libcscdo_la_LDFLAGS = -no-undefined

libcscdo_la_LIBADD =

noinst_LTLIBRARIES += libcscdo_extension.la
libcscdo_la_LIBADD += libcscdo_extension.la
libcscdo_extension_la_SOURCES = \
cs_cdofb_ac.c \
cs_cdofb_monolithic_sles.c \
cs_cdofb_predco.c \
cs_equation_system_sles.c \
cs_navsto_param.c \
cs_navsto_sles.c

clean-local:
	-rm -f *__genmod.f90 *.mod
