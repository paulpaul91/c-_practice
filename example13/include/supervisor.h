#include "employ.h"
namespace My_code
{
class Supervisor:public employ
{
public:
  Supervisor(){};
  ~Supervisor(){};
  void SetSalary(const double Salary);
  void Show_employ_info();  
};
}