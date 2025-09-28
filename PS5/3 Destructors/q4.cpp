#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(int a){
            this->a = a;
            cout<<"constructor called for "<<this->a<<endl;
        }
        ~ number(){
            cout<<"destructor has been called for "<<this->a<<endl;
        }
};
int main()
{
    number n1(45), n2(55);
    {
        number n3(555); //code block
        number n4(89);
    }
    return 0;
}