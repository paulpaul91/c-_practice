#include <iostream>
#include "../include/Sales_item.h"
int main()
{
  std::cout<<"Hi \x4do\115!\n";
  Sales_item book1,book2;
  std::cin>>book1>>book2;
  if(book1.isbn()==book2.isbn())
  {
      std::cout<<book1+book2<<std::endl;
      return 0;
  }
  else
  {
    std::cerr<<"data must refer to the same isbn"<<std::endl;
    return -1;
  }

  
  return 0;
}