#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --cpus-per-task=32
#SBATCH -e F128_2x32_%J_OUT.e
#SBATCH -o F128_2x32_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=32
/usr/bin/time ~/code_saturne/bin/code_saturne run