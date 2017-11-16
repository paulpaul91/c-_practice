#include <iostream>
#include <string>
#include <SpreadSheet.h>
using namespace std;
int main()
{
  My_code::SpreadSheetCell ab(1);
  cout<<ab.GetDoubleValue()<<endl;
  //test SpreadSheetData
  My_code::SpreadSheetData bcd(6,6);
  bcd.SetCellAt(2,3,6);
  cout<<bcd.GetCell(2,3).GetDoubleValue()<<endl;
  //test SpreadSheet
  My_code::SpreadSheet sheet(3,3);
  sheet.SetCellat(2,1,ab);
  My_code::SpreadSheetCell ac;
  ac=sheet.GetCell(2,1);
  cout<<ac.GetDoubleValue()<<endl;
  
  return 0;
}
