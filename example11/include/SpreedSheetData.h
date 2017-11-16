#include "SpreadSheetCell.h"
namespace My_code 
{
class SpreadSheetData
{
public:
    static const int defaultwidth=100;
    static const int defaulthigh=100;
    
    SpreadSheetData(int width,int high);
    SpreadSheetData(SpreadSheetData &Data);
    
    virtual ~SpreadSheetData();
    SpreadSheetData& operator=(SpreadSheetData &Data);
    
    void SetCellAt(int x,int y,const SpreadSheetCell& Cell);
    SpreadSheetCell& GetCell(int x,int y);
    
protected:
  bool inRange(int val,int upper);
  void CopyFrom(const SpreadSheetData &Data);
  int m_width,m_high;
  SpreadSheetCell **m_Cell;   
};
}