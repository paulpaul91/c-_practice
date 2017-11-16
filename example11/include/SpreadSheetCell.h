#include <iostream>
#include <string>
using namespace std;
//单元格设计
//date：2017/11/15
namespace My_code
{
class SpreadSheetCell
{
public:
  SpreadSheetCell();
  SpreadSheetCell(string str);
  SpreadSheetCell(double initvalue);
  SpreadSheetCell(const SpreadSheetCell&);
  
  ~SpreadSheetCell();
  SpreadSheetCell& operator=(const SpreadSheetCell&);
  
  void SetDoubleValue(const double doublevlaue);
  void SetStringValue(const string stringvalue);
  double GetDoubleValue();
  string& GetStringValue();
  SpreadSheetCell& operator+(const SpreadSheetCell& cell);
protected:
  double stringtodouble(const string str);
  string doubletostring(double value);
  double m_value;
  string m_Str;
};
}
