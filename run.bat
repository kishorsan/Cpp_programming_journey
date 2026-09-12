@echo off

g++ %1 -o a.exe

if %errorlevel%==0 (
    echo Running %1...
    a.exe
) else (
    echo Compilation failed!
)