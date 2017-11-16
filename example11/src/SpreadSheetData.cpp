#include "SpreedSheetData.h"
#include <iostream>
using namespace My_code;
SpreadSheetData::SpreadSheetData(int width,int high)
{
  m_width=(width>defaultwidth)?defaultwidth:width;
  m_high=(high>defaulthigh)?defaulthigh:high;
  m_Cell=new SpreadSheetCell* [m_width];
  for(int i=0;i<m_width;i++)
  {
    m_Cell[i]=new SpreadSheetCell[m_high];
  } 
}

SpreadSheetData::~SpreadSheetData()
{
  for(int i=0;i<m_width;i++)
    delete [] m_Cell[i];
  delete [] m_Cell;
}

SpreadSheetData::SpreadSheetData(SpreadSheetData &Data)
{
  m_width=Data.m_width;
  m_high=Data.m_high;
  m_Cell=new SpreadSheetCell* [m_width];
  for(int i=0;i<m_width;i++)
    m_Cell[i]=new SpreadSheetCell[m_high];
  for(int i=0;i<m_width;i++)
    for(int j=0;j<m_high;j++)
    {
      m_Cell[i][j]=Data.m_Cell[i][j];
    } 
}

SpreadSheetData& 
SpreadSheetData::operator=(SpreadSheetData &Data)
{
  if(this==&Data)
    return *this;
  for(int i=0;i<m_width;i++)
    delete [] m_Cell[i];
  delete [] m_Cell;
  m_width=Data.m_width;
  m_high=Data.m_high;
  m_Cell=new SpreadSheetCell* [m_width];
  for(int i=0;i<m_width;i++)
    m_Cell[i]=new SpreadSheetCell[m_high];
  for(int i=0;i<m_width;i++)
    for(int j=0;j<m_high;j++)
    {
      m_Cell[i][j]=Data.m_Cell[i][j];
    } 
  return *this;  
}

void
SpreadSheetData::SetCellAt(int x,int y,const SpreadSheetCell& Cell)
{
  if((!inRange(x,m_width))||(!inRange(y,m_high)))
  {
    cout<<"参数有误"<<endl;
    return;
  }
  m_Cell[x][y]=Cell;  
}

SpreadSheetCell& 
SpreadSheetData::GetCell(int x,int y)
{
  /*
  SpreadSheetCell Cell;
  if((!inRange(x,m_width))||(!inRange(y,m_high)))
  {
    cout<<"参数有误"<<endl;
    return Cell;
  }
  */
  return m_Cell[x][y];
  
}

bool
SpreadSheetData::inRange(int val,int upper)
{
  if((val<=0)||(val>upper))
    return false;
  return true;
}

void 
SpreadSheetData::CopyFrom(const SpreadSheetData &Data)
{
  m_width=Data.m_width;
  m_high=Data.m_high;
  m_Cell=new SpreadSheetCell* [m_width];
  for(int i=0;i<m_width;i++)
    m_Cell[i]=new SpreadSheetCell[m_high];
  for(int i=0;i<m_width;i++)
    for(int j=0;j<m_high;j++)
    {
      m_Cell[i][j]=Data.m_Cell[i][j];
    } 
}