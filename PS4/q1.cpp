#include <iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }
    void calculate_area(void)
    {
        cout << "area: " << this->length * this->breadth;
    }
};
int main()
{
    int l, b;
    cout << "enter length and breadth of rectangle: ";
    cin >> l >> b;
    rectangle r1(l, b);
    r1.calculate_area();
    return 0;
}