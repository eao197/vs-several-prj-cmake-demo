set VCPKG_PATH=..\vcpkg
cmake ^
	-DCMAKE_TOOLCHAIN_FILE=%VCPKG_PATH%\scripts\buildsystems\vcpkg.cmake ^
	-DCMAKE_BUILD_TYPE=Debug ^
	-DCMAKE_INSTALL_PREFIX=target ^
	-DVCPKG_TARGET_TRIPLET=x64-windows ^
	-G "Ninja" ^
	-B cmake_build_debug ^
 	.
