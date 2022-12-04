module use /opt/nvidia/hpc_sdk/modulefiles
module use /opt/tools-hackathon/arm/compilers/modulefiles
module use /opt/tools-hackathon/arm/forge/modulefiles
module use /opt/tools-hackathon/openmpi/modulefiles

module load gnu
module load arm-forge
module load armpl
module load openmpi/gcc

export CC="mpicc"
export CXX="mpic++"
export FC="gfortran"
export DEST=$HOME/code_saturne-7.2.0

export ARMPLROOT="/opt/tools-hackathon/arm/compilers/armpl-22.1.0_AArch64_RHEL-7_gcc_aarch64-linux/include/"

