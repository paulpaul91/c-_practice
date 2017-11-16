#include <SpreedSheetData.h>
//类定义后千万不要忘记打分号，不然编译系统没办法识别
namespace My_code 
{
class SpreadSheet
{
public:
  SpreadSheet(int width,int high);
  SpreadSheet(const SpreadSheet &Data);
  virtual ~SpreadSheet();
  SpreadSheet& operator=(const SpreadSheet &Data);
  void SetCellat(int x,int y,const SpreadSheetCell& Cell);
  SpreadSheetCell& GetCell(int x, int y);
protected:
  SpreadSheetData *m_Data;
};
}