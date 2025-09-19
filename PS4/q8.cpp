#include <iostream>
using namespace std;
class Car
{
    string brand;
    string model;
    float price;

public:
    Car(string br)
    {
        this->model = "NA";
        this->brand = br;
        this->price = 0;
    }
    Car(string t, string a)
    {
        this->model = a;
        this->brand = t;
        this->price = 0;
    }
    Car(string t, string a, float p)
    {
        this->model = a;
        this->brand = t;
        this->price = p;
    }
    void get_Car(void)
    {
        cout << "| Brand: " << this->brand << " | Model: " << this->model << " | Price: $" << this->price << "\n";
    }
};
int main()
{
    // Your code here
    Car t1("Lamborgini"), t2("Aston Martin", "Valkyrie"), t3("Prosche", "911 gt", 250000);
    t1.get_Car();
    t2.get_Car();
    t3.get_Car();
    return 0;
}