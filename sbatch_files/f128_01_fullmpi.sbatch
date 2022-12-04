#!/usr/bin/env bash
#SBATCH --nodes=1 
#SBATCH --ntasks-per-node=64
#SBATCH --cpus-per-task=1
#SBATCH -e F128_64_%J_OUT.e
#SBATCH -o F128_64_%J_OUT.o
#SBATCH --exclusive
#SBATCH -p slurm-a

/usr/bin/time ~/code_saturne/bin/code_saturne run
