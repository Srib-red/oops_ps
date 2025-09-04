#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number: ";
    cin>>a;

    if(a > 0)
    {
        cout<<a<<" is +ve";
    }
    else if (a == 0)
    {
        cout<<a<<" = 0";
    }
    else
    {
        cout<<a<<" is -ve";
    }
    return 0;
}