#/usr/bin/env/ bash
#

echo "[-- ARM data gen BASE]"
bash $HOME/gen_data.sh base C016_PREPROCESS $CS 16
#bash $HOME/gen_data.sh base C016_01 $CS 16
#bash $HOME/gen_data.sh base C016_O2 $CS 16
#bash $HOME/gen_data.sh base C016_04 $CS 16
#bash $HOME/gen_data.sh base F128_PREPROCESS $CS 128
#bash $HOME/gen_data.sh base F128_01 $CS 128
#bash $HOME/gen_data.sh base F128_O2 $CS 128
#bash $HOME/gen_data.sh base F128_04 $CS 128

echo "[-- ARM data gen NO OPENMP]"
bash $HOME/gen_data.sh no-omp C016_PREPROCESS $CS 16
#bash $HOME/gen_data.sh no-omp C016_01 $CS_NOMP 16
#bash $HOME/gen_data.sh no-omp C016_O2 $CS_NOMP 16
#bash $HOME/gen_data.sh no-omp C016_04 $CS_NOMP 16
#bash $HOME/gen_data.sh no-omp F128_PREPROCESS $CS_NOMP 128
#bash $HOME/gen_data.sh no-omp F128_01 $CS_NOMP 128
#bash $HOME/gen_data.sh no-omp F128_O2 $CS_NOMP 128
#bash $HOME/gen_data.sh no-omp F128_04 $CS_NOMP 128
