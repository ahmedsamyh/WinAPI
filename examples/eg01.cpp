#define WIN_COMMON_IMPLMENTATION
#include <WinCommon.hpp>

int main(int argc, char *argv[]) {
  char cd[1024];
  // Using GetCurrentDirectory
  if (!GetCurrentDirectoryA(1024, cd)) {
    momo::win::Err();
  };

  std::cout << "Current Working Directory: " << cd << "\n";

  return 0;
}
