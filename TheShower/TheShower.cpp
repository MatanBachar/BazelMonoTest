#include "HelloShow/HelloShow.h"
#include "TimeShow/TimeShow.h"

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << WatUp(who) << std::endl;
  print_localtime();
  return 0;
}