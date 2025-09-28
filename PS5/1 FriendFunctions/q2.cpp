#include <iostream>
using namespace std;
class Beta;
class Alpha
{
    int a;

public:
    Alpha(int a)
    {
        this->a = a;
    }
    friend void add(Alpha, Beta);
};
class Beta
{
    int b;

public:
    Beta(int b)
    {
        this->b = b;
    }
    friend void add(Alpha, Beta);
};

void add(Alpha a1, Beta b1)
{
    cout << "sum: " << a1.a + b1.b << endl;
}
int main()
{
    Alpha a1(8);
    Beta b1(5);

    add(a1, b1);

    return 0;
}