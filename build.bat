@echo off
mkdir debug
cd debug
cmake -G "MinGW Makefiles" ../
make
clear
.\Linked_Lists.exe
pause
