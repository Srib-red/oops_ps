#include <iostream>
using namespace std;
class student
{
    string name;
    int age;
    float marks;

public:
    student()
    {
        this->name = "No Name provided";
        this->age = 0;
        this->marks = 0;
    }
    student(string nam, int a, float m)
    {
        this->name = nam;
        this->age = a;
        this->marks = m;
    }
    void get_details(void)
    {
        cout << "Name: " << this->name << endl
             << "Age: " << this->age << endl
             << "Marks: " << this->marks << endl;
    }
};

int main()
{
    // Your code here
    student s1;
    s1.get_details();

    student s2("Ajib", 28, 23.4);
    s2.get_details();
    return 0;
}