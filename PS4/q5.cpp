#include <iostream>
using namespace std;
class Time
{
    int hours;
    int min;
    int sec;

public:
    Time()
    {
        this->hours = 0;
        this->min = 0;
        this->sec = 0;
    }
    Time(int h, int m)
    {
        this->hours = h;
        this->min = m;
        this->sec = 0;
    }
    Time(int h, int m, int s)
    {
        this->hours = h;
        this->min = m;
        this->sec = s;
    }
    void get_time(void)
    {
        cout << "Time: " << this->hours << "h " << this->min << "m " << this->sec << "s\n";
    }
};
int main()
{
    // Your code here
    Time t1, t2(12, 34), t3(5, 23, 52);
    t1.get_time();
    t2.get_time();
    t3.get_time();
    return 0;
}