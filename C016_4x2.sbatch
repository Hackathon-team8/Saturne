#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --ntasks-per-node=4
#SBATCH --cpus-per-task=2
#SBATCH -e C016_4x2_%J_OUT.e
#SBATCH -o C016_4x2_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=2
export OMP_PROC_BIND=CLOSE
/usr/bin/time ~/code_saturne/bin/code_saturne run