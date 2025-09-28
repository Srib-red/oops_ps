#include <iostream>
using namespace std;
class Bet;
class Alp
{
    int a;

public:
    Alp(int a)
    {
        this->a = a;
    }
    friend void swap_var(Alp, Bet);
};
class Bet
{
    int b;

public:
    Bet(int b)
    {
        this->b = b;
    }
    friend void swap_var(Alp, Bet);
};
void swap_var(Alp a1, Bet b1)
{
    cout << "Before swap: \n"
         << "a : " << a1.a << endl
         << "b : " << b1.b << endl;
    int temp = a1.a;
    a1.a = b1.b;
    b1.b = temp;
    cout << "After swap: \n"
         << "a : " << a1.a << endl
         << "b : " << b1.b << endl;
}
int main()
{
    Alp a1(6);
    Bet b1(78);

    swap_var(a1, b1);
    return 0;
}