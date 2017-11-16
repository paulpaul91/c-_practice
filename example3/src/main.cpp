#include <iostream>
#include <string>
#include "Sale_na.h"
int main()
{
  Sale_na a;
  std::cout<<a.unit_solds<<std::endl;
  a.unit_solds=100;
  std::cout<<"the next one"<<a.unit_solds<<std::endl;
  a.bookno="123";
  std::cout<<"the number"<<a.bookno<<std::endl;
  return 0;
}
