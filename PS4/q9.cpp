#include <iostream>
using namespace std;
class Employee
{
    string name;
    int id;
    float salary;

public:
    Employee(string nam, int id)
    {
        this->name = nam;
        this->id = id;
        this->salary = 0;
    }
    Employee(string nam, int id, float sal)
    {
        this->name = nam;
        this->id = id;
        this->salary = sal;
    }
    void get(void)
    {
        cout << "Employee Name: " << this->name << "\nEmployee ID: " << this->id << "\nEmployee Salary: $" << this->salary << endl;
    }
};
int main()
{
    Employee e1("Renga Punga", 12), e2("Arune Karune", 34, 100);
    e1.get();
    e2.get();
    return 0;
}