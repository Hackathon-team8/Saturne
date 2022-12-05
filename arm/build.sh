#!/usr/bin/env bash
#

cd ~/arm/build

echo "[-- ARM build w OpenMP]"
../../code_saturne-7.2.0/configure CC="$CC" CXX="$CXX" --with-blas-libs=$ARMPLROOT --prefix=$TEMP --disable-gui --without-med --without-hfd5 --without-cgns --without-metis --disable-salome --without-salome --without-eos --disable-static --enable-long-gnum
make
make install
mv $TEMP/bin/code_saturne $DEST/bin/code_saturne

echo "[-- ARM build w/ OpenMP]"
../../code_saturne-7.2.0/configure CC="$CC" CXX="$CXX" --with-blas-libs=$ARMPLROOT --prefix=$TEMP--disable-gui --without-med --without-hfd5 --without-cgns --without-metis --disable-salome --without-salome --without-eos --disable-static --enable-long-gnum --disable-openmp
make
make install
mv $TEMP/bin/code_saturne $DEST/bin/code_saturne_no_omp
