#include <iostream>
using namespace std;
class Fraction
{
    float numerator;
    float denominator;

public:
    Fraction()
    {
        this->numerator = 0;
        this->denominator = 1;
    }
    Fraction(float num)
    {
        this->numerator = num;
        this->denominator = 1;
    }
    Fraction(float num, float Den)
    {
        this->numerator = num;
        this->denominator = Den;
    }
    void get_fraction_value(void)
    {
        if (this->denominator == 0)
        {
            cout << "Fraction is not defined, Denominator cannot be zero.\n";
        }
        else
        {
            cout << "Fractional form: " << this->numerator << "/" << this->denominator << endl;
            cout << "Decimal form: " << this->numerator / this->denominator << endl;
        }
    }
};
int main()
{
    // Your code here
    Fraction f1, f2(2), f3(2, 3), f4(4, 0);
    f1.get_fraction_value();
    f2.get_fraction_value();
    f3.get_fraction_value();
    f4.get_fraction_value();
    return 0;
}