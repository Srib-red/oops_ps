#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    static int count;
    public:
        complex(){
            this->real = 0;
            this->img = 0;
            count++;
        }
        complex(int a){
            this->real = a;
            this->img = 0;
            count++;
        }
        complex(int a, int b){
            this->real = a;
            this->img = b;
            count++;
        }
        void getter (void){
            cout<<"complex number c"<<count<<": "<<this->real<<" + i"<<this->img<<endl;
        }
};
int complex ::count = 0;
int main()
{
    complex c1;
    c1.getter();
    complex c2(8);
    c2.getter();
    complex c3(4,5);
    c3.getter();
    return 0;
}