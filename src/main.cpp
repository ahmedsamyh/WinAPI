#define WIN_COMMON_IMPLMENTATION
#include <WinCommon.hpp>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  ///
  using namespace momo::win;
  for (auto &f : getDirsInDir(getCurrentDir())) {
    std::cout << "File: " << f << "\n";
  }

  return 0;
}
