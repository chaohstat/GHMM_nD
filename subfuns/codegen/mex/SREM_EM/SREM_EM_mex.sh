MATLAB="/nas02/apps/matlab-2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/nas02/home/c/h/chaoh/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for SREM_EM" > SREM_EM_mex.mki
echo "CC=$CC" >> SREM_EM_mex.mki
echo "CFLAGS=$CFLAGS" >> SREM_EM_mex.mki
echo "CLIBS=$CLIBS" >> SREM_EM_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> SREM_EM_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> SREM_EM_mex.mki
echo "CXX=$CXX" >> SREM_EM_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> SREM_EM_mex.mki
echo "CXXLIBS=$CXXLIBS" >> SREM_EM_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> SREM_EM_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> SREM_EM_mex.mki
echo "LD=$LD" >> SREM_EM_mex.mki
echo "LDFLAGS=$LDFLAGS" >> SREM_EM_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> SREM_EM_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> SREM_EM_mex.mki
echo "Arch=$Arch" >> SREM_EM_mex.mki
echo OMPFLAGS= >> SREM_EM_mex.mki
echo OMPLINKFLAGS= >> SREM_EM_mex.mki
echo "EMC_COMPILER=" >> SREM_EM_mex.mki
echo "EMC_CONFIG=optim" >> SREM_EM_mex.mki
"/nas02/apps/matlab-2013a/bin/glnxa64/gmake" -B -f SREM_EM_mex.mk
