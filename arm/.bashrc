# .bashrc

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

# Uncomment the following line if you don't like systemctl's auto-paging feature:
# export SYSTEMD_PAGER=

# User specific aliases and functions

module use /opt/tools-hackathon/arm/compilers/modulefiles
module use /opt/tools-hackathon/arm/forge/modulefiles
module use /opt/tools-hackathon/openmpi/modulefiles

module load arm-forge
module load armpl
module load acfl
module load openmpi/acfl

export CC="mpicc"
export CXX="mpic++"
export FC="gfortran"
export TEMP=$HOME/code_saturne-7.2.0
export DEST=$HOME/arm
export ARMPLROOT="/opt/tools-hackathon/arm/compilers/armpl-22.1.0_AArch64_RHEL-7_arm-linux-compiler_aarch64-linux/include"
export DATAROOT=$HOME/saturne-open-cases/BUNDLE

export CS=$HOME/arm/bin/code_saturne
export CS_NOMP=$HOME/arm/bin/code_saturne_no_openmp

alias 'cs'='$HOME/arm/bin/code_saturne'
alias 'cs_nomp'='$HOME/arm/bin/code_saturne_no_openmp'
alias 'py'='python3'

###
