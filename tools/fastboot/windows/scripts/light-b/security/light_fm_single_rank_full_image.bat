:: Script to flash images via fastboot

@echo off
call:RunACmd "..\..\..\fastboot.exe flash ram  ..\..\..\..\..\..\images\light-fm-b\light_fastboot_image_single_rank_sec\u-boot-imagewriter.bin"
call:RunACmd "..\..\..\fastboot.exe reboot"
ping 127.0.0.1 -n 5 >nul
call:RunACmd "..\..\..\fastboot.exe flash uboot  ..\..\..\..\..\..\images\light-fm-b\light_fastboot_image_single_rank_sec\u-boot-with-spl.bin"
call:RunACmd "..\..\..\fastboot.exe flash sbmeta ..\..\..\..\..\..\images\light-fm-b\sbmeta.ext4"
call:RunACmd "..\..\..\fastboot.exe flash tee ..\..\..\..\..\..\images\light-fm-b\tee.light_b.ext4"
call:RunACmd "..\..\..\fastboot.exe flash boot  ..\..\..\..\..\..\images\light-fm-b\boot.ext4"
call:RunACmd "..\..\..\fastboot.exe flash root  ..\..\..\..\..\..\images\light-fm-b\rootfs.linux.ext4"

pause
exit

:RunACmd
SETLOCAL
set CmdStr=%1
echo IIIIIIIIIIIIIIII Run Cmd:  %CmdStr% 
%CmdStr:~1,-1% || goto RunACmd

GOTO:EOF
