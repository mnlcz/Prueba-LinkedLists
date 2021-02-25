@echo off
mkdir debug <br>
cd debug <br>
cmake -G "MinGW Makefiles" ../ <br>
make <br>
clear
.\Linked_Lists.exe
pause
