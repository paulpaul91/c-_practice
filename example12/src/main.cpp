#include "mclock.h"
int main()
{
  int h,m;
  mclock m_clock;
  cout<<"请输入小时和分钟"<<endl;
  while(cin>>h>>m)
  {
    m_clock.setth(h).setmm(m).diffA();
    m_clock.Show();
  }
  return 0;
}
