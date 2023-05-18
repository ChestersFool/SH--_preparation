#include <iostream>

std::string even_or_odd(int number) 
{
  if (number % 2 == 1 || number % 2 == -1)
    return "Odd";
  return "Even";
}

int main()
{
    std::cout << even_or_odd(2) << std::endl;
    std::cout << even_or_odd(0) << std::endl;
    std::cout << even_or_odd(7) << std::endl;
    std::cout << even_or_odd(1) << std::endl;
    std::cout << even_or_odd(-1) << std::endl;
    std::cout << even_or_odd(-2) << std::endl;
    return 0;
}