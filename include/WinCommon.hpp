#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>

namespace momo {
namespace win {

void Err();
std::string getCurrentDir();
std::vector<std::string> getFilesInDir(std::string dir);
std::vector<std::string> getDirsInDir(std::string dir);

}; // namespace win
}; // namespace momo

#ifdef WIN_COMMON_IMPLMENTATION

namespace momo {
namespace win {

void Err() {
  char errMsg[1024];
  FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(),
                 LANG_SYSTEM_DEFAULT, errMsg, 1024, NULL);

  std::cerr << "WIN_ERR: " << errMsg << "\n";
  exit(1);
}

std::string getCurrentDir() {
  char cd[MAX_PATH];
  size_t n = GetCurrentDirectoryA(MAX_PATH, cd);
  if (n == 0) {
    Err();
  }
  return std::string(cd);
}

std::vector<std::string> getFilesInDir(std::string _dir) {
  ///
  std::vector<std::string> result;

  _dir.append("\\*");
  WIN32_FIND_DATAA ffd;
  const char *dir = _dir.c_str();
  HANDLE fhandle = FindFirstFileA(dir, &ffd);
  do {
    if (fhandle == INVALID_HANDLE_VALUE) {
      momo::win::Err();
    }
    if (!(ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
      std::string filename = ffd.cFileName;
      result.push_back(filename);
    }

  } while (FindNextFileA(fhandle, &ffd) != 0);

  FindClose(fhandle);

  return result;
}

std::vector<std::string> getDirsInDir(std::string _dir) {
  std::vector<std::string> result;

  _dir.append("\\*");
  WIN32_FIND_DATAA ffd;
  const char *dir = _dir.c_str();
  HANDLE fhandle = FindFirstFileA(dir, &ffd);
  do {
    if (fhandle == INVALID_HANDLE_VALUE) {
      momo::win::Err();
    }
    if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
      std::string filename = ffd.cFileName;
      result.push_back(filename);
    }

  } while (FindNextFileA(fhandle, &ffd) != 0);

  FindClose(fhandle);

  return result;
}

}; // namespace win
}; // namespace momo

#endif
