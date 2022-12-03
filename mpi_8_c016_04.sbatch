#!/usr/bin/env bash
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=8
#SBATCH --ntasks-per-core=1
#SBATCH -e C016_04_%J_OUT.e
#SBATCH -o C016_04_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p basic-slurm

export OMP_NUM_THREADS=1
export OMP_PROC_BIND=TRUE
/usr/bin/time ~/code_saturne/bin/code_saturne run
