#include <iostream>
using namespace std;
class A
{
    string name;
    int id;

protected:
    int grade;

public:
    int money;
    A(string name, int id, int grade, int mo)
    {
        this->name = name;
        this->id = id;
        this->grade = grade;
        this->money = mo;
    }
    void get_info_parent_private(void)
    {
         cout<<this->id<<endl;
         cout<<this->name<<endl;

    }
};
class B : public A
{
    int roll_no;

public:
    B(int r, string n, int i, int gra, int mo) : A(n, i, gra, mo)
    {
        this->roll_no = r;
    }
    void get_info(void) {
        cout<<this->grade<<endl;
        cout<<this->money<<endl;
        cout<<this->roll_no<<endl;
        // cout<<this->id<<endl; private members of parent class not inherited
    }
};
int main()
{
    B b1(12, "bala", 45, 56, 89);
    b1.get_info_parent_private();
    return 0;
}