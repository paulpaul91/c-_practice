#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class mclock
{
public:
  mclock();
  ~mclock();
  mclock& setth(int hh);
  mclock& setmm(int mm);
  int gethh();
  int getmm();
  void diffA();//计算夹角
  void Show();
private:
  int m_mm,m_hh;
  double diff;
};