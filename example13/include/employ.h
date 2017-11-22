#include <iostream>
#include <string>
using namespace std;
namespace My_code
{
class employ
{
public:
  employ();
  virtual ~employ();
  employ& SetFirstName(const string Fir_Name);
  employ& SetLastName(const string Last_Name);
  employ& SetNumberID(const long Number);
  virtual employ& SetSalary(const long Salary);
  const string& GetFirstName();
  const string& GetLastName();
  const long& GetNumberID();
  virtual const long& GetSalary();
  virtual void Show_employ_info();
private:
  employ(const employ& _employ);
  employ& operator=(const employ& _employ);
  string m_FirstName;
  string m_LastName;
  long m_NumberID;
  long m_Salary; 
};
}