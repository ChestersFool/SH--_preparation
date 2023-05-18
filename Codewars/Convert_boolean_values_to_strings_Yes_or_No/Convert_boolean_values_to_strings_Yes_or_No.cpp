#include <iostream>

std::string bool_to_word(bool value)
{
  return value ? "Yes" : "No";
}

int main()
{
    std::cout << bool_to_word(true) << std::endl;
    std::cout << bool_to_word(false) << std::endl;
    return 0;
}