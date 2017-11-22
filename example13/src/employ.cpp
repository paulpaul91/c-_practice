#include "employ.h"
using namespace My_code;
employ::employ(const employ& _employ)
{
  m_FirstName=_employ.m_FirstName;
  m_LastName=_employ.m_LastName;
  m_NumberID=_employ.m_NumberID;
  m_Salary=_employ.m_Salary;
}

employ::employ():
m_FirstName(""),
m_LastName(""),
m_NumberID(0),
m_Salary(0)
{
  
}
employ::~employ()
{
}
employ& 
employ::operator=(const employ& _employ)
{
  m_FirstName=_employ.m_FirstName;
  m_LastName=_employ.m_LastName;
  m_NumberID=_employ.m_NumberID;
  m_Salary=_employ.m_Salary;
  return *this;
}
employ& 
employ::SetFirstName(const string Fir_Name)
{
  m_FirstName=Fir_Name;
  return *this;
}
employ& 
employ::SetLastName(const string Last_Name)
{
  m_LastName=Last_Name;
  return *this;
}
employ& 
employ::SetNumberID(const long int Number)
{
  m_NumberID=Number;
  return *this;
}
employ& 
employ::SetSalary(const long int Salary)
{
  m_Salary=Salary;
  return *this;
}
const string& 
employ::GetFirstName()
{
  return m_FirstName;
}
const string& 
employ::GetLastName()
{
  return m_LastName;
}
const long& 
employ::GetNumberID()
{
  return m_NumberID;
}
const long& 
employ::GetSalary()
{
  return m_Salary;
}
void 
employ::Show_employ_info()
{
  cout<<" Last_Name:"<<m_LastName<<endl;
  cout<<"First_Name:"<<m_FirstName<<endl;
  cout<<" Number_ID:"<<m_NumberID<<endl;
  cout<<"    Salary:"<<m_Salary<<endl;
  cout<<"occupation:employ"<<endl;
}





