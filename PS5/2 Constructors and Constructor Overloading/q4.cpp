#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){
        this->a = 0;
    }
    Number(int x){
        this->a = x;
    }
    Number(Number& p){
        this->a = p.a;
    }
    void getter(void){
        cout<<"a: "<<this->a<<endl;
    }
};
int main()
{
    Number z1(8);
    z1.getter();
    // Number z2(z1);//same
    Number z2 = z1;//same
    z2.getter();

    Number z3;
    z3 = z2;
    z3.getter();
    return 0;
}