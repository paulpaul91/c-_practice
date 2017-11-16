#include <iostream>
#include <vector>
#include "Sales_data.h"
#include "Screen.h"
using namespace std;
int main()
{
//   Sales_data ab;
//   read(cin,ab);
//   print(cout,ab);
  Screen my;
  char ch=my.get();
  ch=my.get(0,0);
  my.move(4,0);
  my.set('#');
  return 0;
}
