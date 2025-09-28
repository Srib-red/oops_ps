#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int width;

public:
    Rectangle(int l, int w)
    {
        this->length = l;
        this->width = w;
    }
    friend int calculate_area(Rectangle r1);
};

int calculate_area(Rectangle r1)
{
    int area = r1.length * r1.width;
    return area;
}
int main()
{
    Rectangle r1(12, 13);
    int area = calculate_area(r1);
    cout << "area: " << area << endl;

    return 0;
}