/* cs_config.h.  Generated from cs_config.h.in by configure.  */
/* cs_config.h.in.  Generated from configure.ac by autoheader.  */

/* C compiler version string */
#define CS_CC_VERSION_STRING "gcc (GCC) 11.2.0"

/* C++ compiler version string */
#define CS_CXX_VERSION_STRING "g++ (GCC) 11.2.0"

/* use RTLD_GLOBAL in dlopen flags. */
/* #undef CS_DLOPEN_USE_RTLD_GLOBAL */

/* Fortran compiler version string */
#define CS_FC_VERSION_STRING "GNU Fortran (GCC) 11.2.0"

/* CUDA compiler version string */
/* #undef CS_NVCC_VERSION_STRING */

/* Define to 1 if you have the `access' function. */
#define HAVE_ACCESS 1

/* AMGX library support */
/* #undef HAVE_AMGX */

/* ATLAS BLAS support */
/* #undef HAVE_ATLAS */

/* Catalyst co-processing support */
/* #undef HAVE_CATALYST */

/* C BLAS support */
/* #undef HAVE_CBLAS */

/* CCM file support */
/* #undef HAVE_CCM */

/* CGNS file support */
/* #undef HAVE_CGNS */

/* Define to 1 if you have the `chdir' function. */
#define HAVE_CHDIR 1

/* Define to 1 if you have the `clock_getcpuclockid' function. */
#define HAVE_CLOCK_GETCPUCLOCKID 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* CoolProp support */
/* #undef HAVE_COOLPROP */

/* HAVE_CPLUS_DEMANGLE */
/* #undef HAVE_CPLUS_DEMANGLE */

/* cuBLAS support */
/* #undef HAVE_CUBLAS */

/* CUDA offload support */
/* #undef HAVE_CUDA */

/* cuSPARSE support */
/* #undef HAVE_CUSPARSE */

/* cuSPARSE generic API support */
/* #undef HAVE_CUSPARSE_GENERIC_API */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* dlopen support */
#define HAVE_DLOPEN 1

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* EOS support */
/* #undef HAVE_EOS */

/* Define to 1 if you have the `erf' function. */
#define HAVE_ERF 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* freesteam support */
/* #undef HAVE_FREESTEAM */

/* Define to 1 if you have the <freesteam/steam.h> header file. */
/* #undef HAVE_FREESTEAM_STEAM_H */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the `getpwuid' function. */
#define HAVE_GETPWUID 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* HAVE_GLIBC_BACKTRACE */
#define HAVE_GLIBC_BACKTRACE 1

/* HDF5 file support */
/* #undef HAVE_HDF5 */

/* Define to 1 if you have the <hdf5.h> header file. */
/* #undef HAVE_HDF5_H */

/* HYPRE library support */
/* #undef HAVE_HYPRE */

/* Define to 1 if the system has the type `int32_t'. */
#define HAVE_INT32_T 1

/* Define to 1 if the system has the type `int64_t'. */
#define HAVE_INT64_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `linkat' function. */
#define HAVE_LINKAT 1

/* Use 64-bit type for cs_gnum_t. */
#define HAVE_LONG_GNUM 1

/* Use 64-bit type for cs_lnum_t. */
/* #undef HAVE_LONG_LNUM */

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* HAVE_MALLOC_HOOKS */
/* #undef HAVE_MALLOC_HOOKS */

/* MED file support */
/* #undef HAVE_MED */

/* MEDCoupling support */
/* #undef HAVE_MEDCOUPLING */

/* MEDCoupling with loader support */
/* #undef HAVE_MEDCOUPLING_LOADER */

/* MED file MPI support */
/* #undef HAVE_MED_MPI */

/* Melissa co-processing support */
/* #undef HAVE_MELISSA */

/* Melissa co-processing support with MPI */
/* #undef HAVE_MELISSA_MPI */

/* Melissa 0.5 or older co-processing support with MPI */
/* #undef HAVE_MELISSA_MPI_05 */

/* Melissa co-processing support without MPI */
/* #undef HAVE_MELISSA_NO_MPI */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* use METIS */
/* #undef HAVE_METIS */

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* MKL libraries support */
/* #undef HAVE_MKL */

/* Define to 1 if you have the `modf' function. */
#define HAVE_MODF 1

/* MPI support */
#define HAVE_MPI 1

/* Define to 1 if you have the <mpi.h> header file. */
/* #undef HAVE_MPI_H */

/* MPI nonblocking barrier */
#define HAVE_MPI_IBARRIER 1

/* MPI_IN_PLACE support */
#define HAVE_MPI_IN_PLACE 1

/* MPI-IO support */
#define HAVE_MPI_IO 1

/* Mumps single-precision support */
/* #undef HAVE_MUMPS */

/* openmp support */
#define HAVE_OPENMP 1

/* openmp accelerator support */
/* #undef HAVE_OPENMP_TARGET */

/* ParaMEDMEM support */
/* #undef HAVE_PARAMEDMEM */

/* use ParMetis */
/* #undef HAVE_PARMETIS */

/* PETSc support */
/* #undef HAVE_PETSC */

/* plugins support */
/* #undef HAVE_PLUGINS */

/* Catalyst co-processing support as plugin */
/* #undef HAVE_PLUGIN_CATALYST */

/* MEDCoupling support as plugin */
/* #undef HAVE_PLUGIN_MEDCOUPLING */

/* Melissa co-processing support as plugin */
/* #undef HAVE_PLUGIN_MELISSA */

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the `pow' function. */
#define HAVE_POW 1

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* use SCOTCH */
/* #undef HAVE_PTSCOTCH */

/* Define to 1 if you have the <ptscotch.h> header file. */
/* #undef HAVE_PTSCOTCH_H */

/* Relocatable installation */
/* #undef HAVE_RELOCATABLE */

/* Define to 1 if you have the `sbrk' function. */
#define HAVE_SBRK 1

/* use SCOTCH */
/* #undef HAVE_SCOTCH */

/* Define to 1 if you have the <scotch.h> header file. */
/* #undef HAVE_SCOTCH_H */

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sleep' function. */
#define HAVE_SLEEP 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* sockets support */
#define HAVE_SOCKET 1

/* Define to 1 if you have the `stat' function. */
#define HAVE_STAT 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if you have the `sysinfo' function. */
#define HAVE_SYSINFO 1

/* Define to 1 if you have the <sys/procfs.h> header file. */
#define HAVE_SYS_PROCFS_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/signal.h> header file. */
#define HAVE_SYS_SIGNAL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysinfo.h> header file. */
#define HAVE_SYS_SYSINFO_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the `tgamma' function. */
#define HAVE_TGAMMA 1

/* Define to 1 if the system has the type `uint32_t'. */
#define HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint64_t'. */
#define HAVE_UINT64_T 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `unsigned long long'. */
#define HAVE_UNSIGNED_LONG_LONG 1

/* Define to 1 if you have the <vtkCPPythonScriptV2Pipeline.h> header file. */
/* #undef HAVE_VTKCPPYTHONSCRIPTV2PIPELINE_H */

/* gzipped file support */
#define HAVE_ZLIB 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* MPI vendor name */
/* #undef MPI_VENDOR_NAME */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "code_saturne"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "saturne-support@edf.fr"

/* Define to the full name of this package. */
#define PACKAGE_NAME "code_saturne"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "code_saturne 7.2.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "code_saturne"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://code-saturne.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "7.2.0"

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* The size of z_off_t, as returned by zlibCompileFlags. */
#define SIZEOF_Z_OFF_T 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "7.2.0"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
