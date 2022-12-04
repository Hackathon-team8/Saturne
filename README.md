# Saturne Code
## Team 8

# How to build the code:
```bash
source prepare_env.sh
```
Then
```bash
cd code_saturne-7.2.0
mkdir build
./sbin/bootstrap
cd build
../configure CC="$CC" CXX="$CXX" --with-blas=$ARMPLROOT --prefix=$DEST --disable-gui --without-med --without-hfd5 --without-cgns --without-metis --disable-salome --without-salome --without-eos --disable-static --enable-long-gnum
make
make install
```
# How to run the code:
```bash
sbatch run_saturn.sbatch
```

## You may have to change the file run_saturn.sbatch to run it on a node
