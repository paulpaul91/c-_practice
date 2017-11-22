#include "supervisor.h"
using namespace My_code;
void 
Supervisor::SetSalary(const double Salary)
{
  employ::SetSalary(Salary);
}
void Supervisor::Show_employ_info()
{
  //cout<<" Last_Name:"<<m_LastName<<endl;
  //cout<<"First_Name:"<<m_FirstName<<endl;
  //cout<<" Number_ID:"<<m_NumberID<<endl;
  //cout<<"    Salary:"<<m_Salary<<endl;
  employ::Show_employ_info();
  cout<<"occupation:Supervisor"<<endl;
}

