#include <iostream>
using namespace std;
class Student
{
    int roll_no;
    string name;

public:
    Student(string nam, int m)
    {
        this->roll_no = m;
        this->name = nam;
    }
    Student(string nam)
    {
        this->name = nam;
        this->roll_no = 0;
    }
    Student(void)
    {
        this->name = "NIL";
        this->roll_no = 0;
    }
    void getter(void)
    {
        cout << "\n1. Name: " << this->name << endl;
        cout << "2. roll_no: " << this->roll_no << endl;
    }
};

int main()
{
    // Your code here
    Student s1("Renga Punga", 66), s2("Arune Krune"), s3;
    s1.getter();
    s2.getter();
    s3.getter();
    return 0;
}