# WinAPI

Repo to learn and wrap winAPI functions.

## Currently wrapped functions:
- `momo::win::Err()`
: Prints the last error occured after calling a winapi function and exits with 1.
- `momo::win::getCurrentDir()`
: returns a string containing the current working directory.
- `momo::win::getFilesInDir(std::string dir)`
: returns a vector of filenames in dir.
- `momo::win::getFilesInDir(std::string dir)`
: returns a vector of directories in dir.


All these functions are in a [stb](https://github.com/nothings/stb)-style header only library [WinCommon.hpp](include/WinCommon.hpp)


## References:
- [winapi docs](https://learn.microsoft.com/en-us/windows/win32/apiindex/windows-api-list)
