#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --ntasks-per-node=2
#SBATCH --cpus-per-task=4
#SBATCH -e C016_2x4_%J_OUT.e
#SBATCH -o C016_2x4_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=4
export OMP_PROC_BIND=TRUE
/usr/bin/time ~/code_saturne/bin/code_saturne run