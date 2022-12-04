#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --cpus-per-task=2
#SBATCH -e F128_32x2_%J_OUT.e
#SBATCH -o F128_32x2_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=2
/usr/bin/time ~/code_saturne/bin/code_saturne run