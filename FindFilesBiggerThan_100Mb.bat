@echo off
setlocal enabledelayedexpansion
set "folder=%~dp0"
set /a "size_limit_mb=100"
set /a "size_limit=size_limit_mb * 1024 * 1024"

for /r "%folder%" %%f in (*) do (
    set "file_size=%%~zf"
    if !file_size! gtr %size_limit% (
        set /a "file_size_mb=!file_size! / (1024 * 1024)"
        echo File: %%f
        echo Size: !file_size_mb! MB
        echo.
    )
)
pause
