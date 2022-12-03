#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --ntasks-per-node=8
#SBATCH --cpus-per-task=1
#SBATCH -e C016_8x1_%J_OUT.e
#SBATCH -o C016_8x1_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=1
export OMP_PROC_BIND=TRUE
/usr/bin/time ~/code_saturne/bin/code_saturne run