#include<iostream>
using namespace std;
class Car{
    string name;
    public:
        Car(string name){
            this->name = name;
            cout<<"constructor created for "<<this->name<<endl;
        }
        ~ Car(){
            cout<<"destructor called for "<<this->name<<"!!!\n";
        }
};
int main()
{
    Car c1("rengaCar"),c2("marutiSorup");
    return 0;
}