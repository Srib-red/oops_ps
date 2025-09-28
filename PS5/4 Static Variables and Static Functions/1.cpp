#include <iostream>
using namespace std;
class number
{
    int a;

public:
    static int count;
    number(int a)
    {
        this->a = a;
        count++;
        cout << "constructor called for n" << count << ": " << this->a << endl;
    }
    ~number()
    {
        cout << "destructor has been called for " << this->a << endl;
    }
};
int number ::count = 0;
int main()
{
    number n1(45);
    number n2(455);
    number n3(555); // code block
    number n4(89);

    cout << "total count: " << number ::count << endl;

    return 0;
}