#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --ntasks-per-node=8
#SBATCH --cpus-per-task=8
#SBATCH -e F128_8x8_%J_OUT.e
#SBATCH -o F128_8x8_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=8
export OMP_PROC_BIND=SPREAD
/usr/bin/time ~/code_saturne/bin/code_saturne run