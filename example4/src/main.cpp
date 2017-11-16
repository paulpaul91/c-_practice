#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
  string s1;
  string s2=s1;
  string s3="hiya";
  string s4(10,'c');
  cout<<"s1:"<<s1<<endl;
  cout<<"s1是否为空"<<s1.empty()<<endl;
  cout<<"s2:"<<s2<<endl;
  cout<<"s3:"<<s3<<endl;
  cout<<"s4:"<<s4<<endl;
  cout<<"s4的大小"<<s4.size()<<endl;
  s3+=s4;
  cout<<"s4+s5"<<s3<<endl;
//   string s;
//   cin>>s;
//   cout<<s<<endl;
//   string line;
//   while(getline(cin,line))
//     if(line.size()>5)
//       cout<<line<<endl;
  string s5="hello!!!!";
  string s6="world";
  string s7=s5+","+s6+'\n';
  cout<<"s7 is "<<s7<<endl;
  decltype(s5.size()) punct_cn=0;
  for(auto c:s5)
  {
    cout<<toupper(c)<<endl;
    if(ispunct(c))
      ++punct_cn;   
  } 
  cout<<punct_cn
  <<" punctutaion caharacters in "<<s5<<endl;
  string s("Hello World!!!");
  for(auto &c:s)
    c=toupper(c);
  cout<<s<<endl;
  if (!s.empty())
    cout<<s[0]<<endl;

  string s8("Some string");
  for(decltype(s8.size()) index=0;index!=s8.size()&&!isspace(s[index]);++index)
    s8[index]=toupper(s8[index]);
  cout<<s8<<endl;
  
  
  const string hexdigits="0123456789ABCDEF";
  string result;
  string::size_type n;
  while(cin>>n)
    if(n<hexdigits.size())
      result+=hexdigits[n];
  cout<<"your hex number is: "<<result<<endl;
    return 0;
}
