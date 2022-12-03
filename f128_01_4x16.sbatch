#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --ntasks-per-node=4
#SBATCH --cpus-per-task=16
#SBATCH -e F128_4x16_%J_OUT.e
#SBATCH -o F128_4x16_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

export OMP_NUM_THREADS=16
export OMP_PROC_BIND=CLOSE
/usr/bin/time ~/code_saturne/bin/code_saturne run