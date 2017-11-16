#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define DEBUG 
//函数返回引用，函数体中的局部变量不能，会被销毁
char &get_val(string &str,string::size_type ix)
{
  return str[ix];
}
vector<string> process(bool a)
{
#ifdef DEBUG
  cout<<"goof"<<endl;
#endif
  if(a)
    return{"function","okay"};
  else
    return{"112"};

}
int odd[]={1,3,5,7,9};
int even[]={0,2,4,6,8};
//decltype(odd) *arrPtr(int i)
int (*arrPtr(int i))[5]
{
  return (i%2)?&odd:&even;
}
int main()
{
  cout<<"aaaa"<<endl;
  string s("a value");
  cout<<s<<endl;
  get_val(s,0)='A';
  cout<<s<<endl;
  
  for(auto i:process(true))
    cout<<i<<endl;
  
    for(auto i:process(false))
    cout<<i<<endl;
  int (*p)[5];
  p=arrPtr(1);
  cout<<(*p)[1]<<endl;
  cout<<(*p)[0]<<endl;
#ifdef DEBUG
        cout<<"DEBUG:value of is"<<50<<endl;
#else
       cout<<"RELEASE: value of is"<<60<<endl;
#endif
  return 0;
}
