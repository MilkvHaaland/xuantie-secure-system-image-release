:: Script to flash imagess via fastboot

@echo off
ping 127.0.0.1 -n 5 >nul
call:RunACmd "..\..\..\fastboot.exe flash uboot ..\..\..\..\..\..\prebuild\images\light-fm-a\u-boot-with-spl.bin"

pause
exit

:RunACmd
SETLOCAL
set CmdStr=%1
echo IIIIIIIIIIIIIIII Run Cmd:  %CmdStr% 
%CmdStr:~1,-1% || goto RunACmd

GOTO:EOF
