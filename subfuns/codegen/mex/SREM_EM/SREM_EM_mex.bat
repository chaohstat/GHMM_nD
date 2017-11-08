@echo off
set MATLAB=D:\PROGRA~1\MATLAB\R2014b
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2014b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=SREM_EM_mex
set MEX_NAME=SREM_EM_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for SREM_EM > SREM_EM_mex.mki
echo COMPILER=%COMPILER%>> SREM_EM_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> SREM_EM_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> SREM_EM_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> SREM_EM_mex.mki
echo LINKER=%LINKER%>> SREM_EM_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> SREM_EM_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> SREM_EM_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> SREM_EM_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> SREM_EM_mex.mki
echo BORLAND=%BORLAND%>> SREM_EM_mex.mki
echo OMPFLAGS= >> SREM_EM_mex.mki
echo OMPLINKFLAGS= >> SREM_EM_mex.mki
echo EMC_COMPILER=msvcsdk>> SREM_EM_mex.mki
echo EMC_CONFIG=optim>> SREM_EM_mex.mki
"D:\Program Files\MATLAB\R2014b\bin\win64\gmake" -B -f SREM_EM_mex.mk
