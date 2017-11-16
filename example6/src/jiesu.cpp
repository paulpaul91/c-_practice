// #include <iostream>
// #include <string>
// using namespace std;
#include "jiesu.h"
int fact(int val)
{
  int ret=1;
  while(val>1)
  {
    ret*=val--;
  }
  return ret;
}
size_t count_calls()
{
  static size_t ctr=0;
  return ++ctr;
}
//这是直接定义成指针
void reset(int *ip)
{
  *ip=0;
  ip=0;
}
//定义为引用就可以改变传入的值
//此处仅仅是一个别名，可以避免拷贝
void reset1(int &a)
{
  a=10;
}
//引用可以额外返回信息
string::size_type find_char(const string &s,char c,string::size_type &occurs)
{
  auto ret=s.size();
  occurs=0;
  for(decltype(ret) i=0;i!=s.size();++i)
  {
    if(s[i]==c)
    {
      if(ret==s.size())
	ret=i;
      ++occurs;
    }
  }
  return ret;
}
void print(const int *a)
{
  cout<<"print"<<a[0]<<endl;
}
void print1(const char *cp)
{
  if(cp)
    while(*cp)
      cout<<*cp++<<endl;
}
void print2(const int *beg,const int *end)
{
   while(beg!=end)
     cout<<*beg++<<endl;
}
void print3(const int ia[],size_t size)
{
  for(size_t i=0;i!=size;++i)
  {
    cout<<ia[i]<<endl;
  }
}
