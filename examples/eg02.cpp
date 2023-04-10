#define WIN_COMMON_IMPLMENTATION
#include <WinCommon.hpp>

int main(int argc, char *argv[]) {
  // Using MessageBox
  std::string msgStr = "Your mom!";
  const char *title = "MessageBox";
  const char *msg = msgStr.c_str();
  MessageBoxA(NULL, msg, title, MB_OK);

  return 0;
}
