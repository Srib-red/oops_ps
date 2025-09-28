#include <iostream>
using namespace std;
class Circle;
class Square
{
    int side;
    float area_sq;

public:
    Square(int a)
    {
        this->side = a;
        this->area_sq = this->side * this->side;
    }
    friend void compare_area(Square s1, Circle c1);
};
class Circle
{
    int radius;
    float area_cr;

public:
    Circle(int rad)
    {
        this->radius = rad;
        this->area_cr = 3.14 * this->radius * this->radius;
    }
    friend void compare_area(Square s1, Circle c1);
};

void compare_area(Square s1, Circle c1)
{
    cout << "Area of sq: " << s1.area_sq << endl;
    cout << "Area of cr: " << c1.area_cr << endl;
    if (s1.area_sq > c1.area_cr)
    {
        cout << "Area of Sq is greater.\n";
    }
    else
    {
        cout << "Area of Cr is greater.\n";
    }
}

int main()
{
    Circle c1(3);
    Square s1(3);

    compare_area(s1, c1);

    return 0;
}