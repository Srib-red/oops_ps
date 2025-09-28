#include <iostream>
using namespace std;
class Student
{
    int marks;
    string name;

public:
    Student(string nam, int m)
    {
        this->marks = m;
        this->name = nam;
    }
    void getter(void)
    {
        cout << "1.Name: " << this->name << endl;
        cout << "2.Marks: " << this->marks << endl;
    }
};

int main() {
    // Your code here
    Student s1("Renga Punga", 66), s2("Arune Krune", 69);
    s1.getter();
    s2.getter();
    return 0;
}