# WinAPI

Repo to learn and wrap winAPI functions.

## Currently wrapped functions:
- Err()                 Prints the last error occured after calling a winapi function and exits with 1.
- getCurrentDir()		returns a string containing the current working directory.
- getFilesInDir(dir)    returns a vector of filenames in dir
- getFilesInDir(dir)    returns a vector of directories in dir


All these functions are in a [stb](https://github.com/nothings/stb)-style header only library [WinCommon.hpp](include/WinCommon.hpp)

