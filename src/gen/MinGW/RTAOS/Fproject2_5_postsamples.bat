@echo off
copy Samples\includes\Std_Types.h /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy Samples\includes\Platform_Types.h /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy Samples\includes\Compiler.h /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy Samples\includes\Os_Compiler_Cfg.h /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy Samples\includes\Compiler_Cfg.h /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
if exist Samples\includes\Os_MemMap.h copy Samples\includes\Os_MemMap.h /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\VECUs\MinGW\Obj\Samples\includes\Std_Types.h" /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\VECUs\MinGW\Obj\Samples\includes\Platform_Types.h" /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\VECUs\MinGW\Obj\Samples\includes\Compiler.h" /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\VECUs\MinGW\Obj\Samples\includes\Os_Compiler_Cfg.h" /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
copy "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\VECUs\MinGW\Obj\Samples\includes\Compiler_Cfg.h" /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
if exist "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\VECUs\MinGW\Obj\Samples\includes\Os_MemMap.h" copy "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\VECUs\MinGW\Obj\Samples\includes\Os_MemMap.h" /Y "C:\ETASData\ISOLAR-EVE3.5.0\workspace\Fproject2_5\src\gen\MinGW\RTAOS\" >nul
