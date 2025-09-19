#include <iostream>
using namespace std;
class Distance
{
    float ft;
    float in;

public:
    Distance()
    {
        this->ft = 0;
        this->in = 0;
    }
    Distance(float feet)
    {
        this->ft = feet;
        this->in = 0;
    }
    Distance(float feet, float inc)
    {
        this->ft = feet;
        this->in = inc;
    }
    void get_dist(void)
    {
        cout << "Distance: " << this->ft << " ft " << this->in << " in\n";
    }
};
int main()
{
    // Your code here
    Distance d1, d2(12, 8), d3(5);
    d1.get_dist();
    d3.get_dist();
    d2.get_dist();
    return 0;
}