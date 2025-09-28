#include <iostream>
using namespace std;
class Student
{
    int marks;
    string name;
    static int count;

public:
    Student(string nam, int m)
    {
        this->marks = m;
        this->name = nam;
        count++;

        cout << "Student " << count << " details: " << endl;
        cout << "1.Name: " << this->name << endl;
        cout << "2.Marks: " << this->marks << endl;
    }
    friend void marks_compare(Student, Student);
};

int Student ::count;
void marks_compare(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
    {
        cout << s1.name << " scored better marks than " << s2.name << endl;
    }
    else
    {
        cout << s2.name << " scored better marks than " << s1.name << endl;
    }
}
int main()
{
    Student s1("Ramesh", 66), s2("Aajib", 69);
    marks_compare(s1, s2);
    return 0;
}