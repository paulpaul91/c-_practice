#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<string> svec={"asad","adf","aafs1"};
  cout<<svec[0]<<endl;
  
  vector<int> v2;
  for(int i=0;i!=100;++i)
    v2.push_back(i);
  cout<<v2.size()<<endl;
  
  
  vector<int> v{1,2,3,4,5,6,7,8,9};
  for(auto &i:v)
    i*=i;
  for(auto i:v)
    cout<<i<<"  ";
  cout<<endl;
  
  string s("sting some");
  if(s.begin()!=s.end())
  {
    auto it=s.begin();
    *it=toupper(*it);
  }
  cout<<s[0]<<endl;
  
  string s1("sting some");
  for(auto it=s1.begin();it!=s1.end()&&!isspace(*it);++it)
    *it=toupper(*it);
  cout<<s1<<endl;
  
  
  string nums[]={"one","two","three"};
  string *p=&nums[0];
  cout<<*p<<endl;
  string *p2=nums;
  cout<<*p2<<endl;
  int ia[]={1,1,2,3,4};
  auto ia2(ia);
  ia2+=2;
  cout<<*ia2<<endl;
  
  
  int int_arr[]={0,1,2,3,4,5};
  vector<int> subVec(int_arr+1,int_arr+4);  
  cout<<subVec[2]<<endl;
  
  int ia1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
  for(auto p=ia1;p!=ia1+3;++p)
  {
    for(auto q=*p;q!=*p+4;++q)
      cout<<*q<<" ";
    cout<<endl;
  }
  for(auto p=begin(ia1);p!=end(ia1);++p)
  {
    for(auto q=begin(*p);q!=end(*p);++q)
            cout<<*q<<" ";
    cout<<endl;
  }
  return 0;
}
