#include "mclock.h"
mclock::mclock():
m_mm(0),
m_hh(0),
diff(0.0)
{
  
}
mclock::~mclock()
{

}
mclock& 
mclock::setmm(int mm)
{
  m_mm=mm%60;
  return *this;
}
mclock& 
mclock::setth(int hh)
{
  m_hh=hh%12;
  return *this;
}
int 
mclock::gethh()
{
  return m_hh;
}
int 
mclock::getmm()
{
  return m_mm;
}
void 
mclock::diffA()
{
  diff=((m_hh*30+((double)m_mm)/60.0*30)-(double)m_mm*6);//我们得注意，当分针动的时候，时针实际也是会动的，所以分针的动应该折算到时针上，不管
  //时针一个小时30度，分针一分钟为6度，所以要注意这个现象。以0 0为基准直接做差即可，取取小于180度的角，还有当角度为负，时针在分针之前
  if(diff>180)
    diff=360-diff;
  if(diff<0)
    diff=-diff;
}
void 
mclock::Show()
{
  cout.fill('0');
  cout<<setw(2)<<m_hh<<":";
  cout<<setw(2)<<m_mm<<"=";
  cout<<diff<<endl;
}