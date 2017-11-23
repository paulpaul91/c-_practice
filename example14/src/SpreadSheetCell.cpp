#include "SpreadSheetCell.h"
#include <sstream>
using namespace My_code;
string
SpreadSheetCell::doubletostring(double value)
{
  ostringstream outstr;
  outstr<<value;
  return (outstr.str());
}

double
SpreadSheetCell::stringtodouble(const string str)
{
  double temp;
  istringstream instr(str);
  instr>>temp;
  if(instr.fail()||instr.eof())
    return 0;
  return temp;
}

SpreadSheetCell::SpreadSheetCell():
m_value(0),
m_Str("")
{
}

SpreadSheetCell::~SpreadSheetCell()
{
}
SpreadSheetCell::SpreadSheetCell(double initvalue):
m_value(initvalue),
m_Str(doubletostring(initvalue))
{
  
}

SpreadSheetCell::SpreadSheetCell(string str):
m_value(stringtodouble(str)),
m_Str(str)
{
  
}

SpreadSheetCell&
SpreadSheetCell::operator=(const SpreadSheetCell& cell)
{
  m_value=cell.m_value;
  m_Str=cell.m_Str;
  return *this;
}

void
SpreadSheetCell::SetDoubleValue(const double doublevlaue)
{
  m_value=doublevlaue;
  m_Str=doubletostring(m_value);
}

void
SpreadSheetCell::SetStringValue(const string stringvalue)
{
  m_Str=stringvalue;
  m_value=stringtodouble(m_Str);
}

double
SpreadSheetCell::GetDoubleValue()
{
  return m_value;
}

string&
SpreadSheetCell::GetStringValue()
{
  return m_Str;
}

SpreadSheetCell& 
SpreadSheetCell::operator+(const SpreadSheetCell& cell)
{
  m_value=m_value+cell.m_value;
  m_Str=m_Str+cell.m_Str;
}
