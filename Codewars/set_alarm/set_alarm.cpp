#include <iostream>

bool set_alarm(const bool& employed,const bool& vacation){
  return employed == true && vacation == false ? true : false;
}

int main(){
  std::cout << set_alarm(true, true) << '\n';
  std::cout << set_alarm(false, true) << '\n';
  std::cout << set_alarm(false, false) << '\n';
  std::cout << set_alarm(true, false) << '\n';
  return 0;
}