#include <iostream>
#include <vector>
//#include "employ.h"
#include "supervisor.h"
using namespace std;
using namespace My_code;
int main()
{
  employ m_employ;
  m_employ.Show_employ_info();
  m_employ.SetFirstName("luo").SetLastName("BIN").SetNumberID(10000).SetSalary(1000);
  m_employ.Show_employ_info();
  
  Supervisor m_Supervisor;
  m_Supervisor.SetFirstName("jiang").SetLastName("tiger").SetNumberID(1).SetSalary(20000);
  m_Supervisor.Show_employ_info();
  employ &mem=m_Supervisor;
  mem.Show_employ_info();
  return 0;
}
