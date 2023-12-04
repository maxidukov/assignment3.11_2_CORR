#include <iostream>
#include <string>
#include <iomanip>
#include "leaver.h"

int main() {
  std::cout << "Введите имя: ";
  std::string name;
  std::cin >> std::setw(254) >> name;
  Leaver leaver;
  std::cout<<leaver.leave(name);
  std::cout << std::endl;
}
