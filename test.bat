@echo off
g++ main.cpp LinearEquation.cpp
PlotData.cpp -o program.exe
start cmd /k program.exe 
