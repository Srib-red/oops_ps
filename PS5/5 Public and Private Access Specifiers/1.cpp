#include<iostream>
#include<string>
using namespace std;
class rectangle{
    private:
     float length;
     float width;
    public:
     void setter (float l, float b)
     {
        this->length = l;
        this->width = b;
     }
     void getter (void)
     {
        cout<<"area of rectangle: "<<this->length*this->width<<endl;
     }
};
int main(){
    //public members and function are accessible in other functions.
    //private members are not acessible outside the class;
    float l, b;
    cout<<"enter length and width of rectangle: ";
    cin>>l>>b;
    rectangle r1;
    r1.setter(l , b);
    r1.getter();

    return 0;
}