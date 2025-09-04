#include<iostream>
using namespace std;
int main(){
    int a, p, prod = 1, n = 1;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>p;

    while (n<=p)
    {
        prod = prod * a;
        n++;
    }
    
    cout<<a<<"^"<<p<<": "<<prod;
    return 0;
}

