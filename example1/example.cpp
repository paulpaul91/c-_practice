#include<iostream>
int main()
{
  /*
     std::cout<<"enter two numbers"<<std::endl;
     int v1=0,v2=0;
     std::cin>>v1>>v2;
     std::cout<<"the sum of"<<v1<<" and "<<v2<<"is "<<v1+v2<<std::endl;
   
    int sum=0,val=1;
    while(val<=10)
    {
      sum+=val;
      ++val;
    }
    std::cout<<"sum of 1 to 10 is"
      <<sum<<std::endl;
    std::cout<<"the next way"<<std::endl;*/
//     int sum1=0;
//     for (int val1=1;val1<=10;val1++)
//       sum1+=val1;
//     std::cout<<"sum of 1 to 10 inclusive is"
// 	<<sum1<<std::endl;
//     std::cout<<"val1 is "<<val1<<std::endl;
    /*std::cout<<"the third way with any neumber"<<std::endl;
    int sum2=0,value=0;
    while(std::cin>>value)
      sum2+=value;
        std::cout<<"sum of "
	<<sum2<<std::endl;*/
    int ival=1024;
    int *p=&ival;
    int **ppi=&p;
    std::cout<<"the calue of ival\n"
	     <<"direct value:"<<ival<<"\n"
	     <<"indirect value:"<<*p<<"\n"
	     <<"doubly indirect value:"<<**ppi<<std::endl;
    int i=42;
    int *p1;
    int *&r=p1;
    //r=&i;
    p1=&i;
    std::cout<<"p1 is i"<<*p1<<std::endl;
    std::cout<<"r is i"<<*r<<std::endl;
    const int buffsize=512;
//     const int i=get_size();
    return 0;
}
