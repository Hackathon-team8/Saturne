#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --cpus-per-task=4
#SBATCH -e F128_16x4_%J_OUT.e
#SBATCH -o F128_16x4_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=4
/usr/bin/time ~/code_saturne/bin/code_saturne run