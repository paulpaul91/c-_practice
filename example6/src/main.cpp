#include <iostream>
#include "jiesu.h"
#include <string>
using namespace std;

int main()
{
  a=a+1;
  int j=fact(a);
  cout<<"a! is "<<j<<endl;
  
  int j1=fact(5);
  cout<<"5! is "<<j1<<endl;
  
  for(size_t i=0;i!=10;i++)
    cout<<count_calls()<<endl;
  
  //针对指针的一些问题
  int n=0,i=42;
  int *p=&n,*q=&i;
  *p=8;
  cout<<"n is "<<n<<endl;
  p=q;
  cout<<"p is "<<*p<<endl;
  
  int k=42;
  reset(&k);
  cout<<"k is"<<k<<endl;
  
  
  int k1=0;
  reset1(k1);
  cout<<"k1 is"<<k1<<endl;
  
  
  string s="aghass";
  string::size_type a;
  auto index=find_char(s,'a',a);
  cout<<"index is "<<index<<"  occurs time "<<a<<endl;
  
  const int ci=42;
  int ii=ci;
  //指针p1是常量，其值可变的
  int * const p1=&ii;
  cout<<"*p1 "<<*p1<<endl;
  *p1=0;
  cout<<"ii "<<ii<<endl;
  
  int aa[5]={0,1,2,3,4};
  print(aa);
  
  char bb[2]={'1','a'};
  print1(bb);
  
  int jj[6]={1,2,3,4,5,6};
  print2(begin(jj),end(jj));
  
  int kk[]={0,1,5,6};
  print3(kk,end(kk)-begin(kk));
  return 0;
}
