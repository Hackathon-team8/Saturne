#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --ntasks-per-node=1
#SBATCH --cpus-per-task=8
#SBATCH -e C016_1x8_%J_OUT.e
#SBATCH -o C016_1x8_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=8
export OMP_PROC_BIND=TRUE
/usr/bin/time ~/code_saturne/bin/code_saturne run