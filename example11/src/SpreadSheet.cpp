#include "SpreadSheet.h"
using namespace My_code;
SpreadSheet::SpreadSheet(int width,int high)
{
  m_Data=new SpreadSheetData(width,high);
}

SpreadSheet::SpreadSheet(const SpreadSheet &Data)
{
  m_Data=new SpreadSheetData(*(Data.m_Data));
}

SpreadSheet::~SpreadSheet()
{
  m_Data->~SpreadSheetData();
}

SpreadSheet& 
SpreadSheet::operator=(const SpreadSheet &Data)
{
  *m_Data=*Data.m_Data;
  return *this;
}

void 
SpreadSheet::SetCellat(int x,int y,const SpreadSheetCell& Cell)
{
  m_Data->SetCellAt(x,y,Cell);
}

SpreadSheetCell& 
SpreadSheet::GetCell(int x, int y)
{
  return m_Data->GetCell(x,y);
}
