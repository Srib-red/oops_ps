#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two integers: ";
    cin>>a>>b;
    if (a > b)
    {
        cout<<a<<" greater than "<<b;
    }
    else if(a = b)
    {
        cout<<a<<" = "<<b;
    }
    else
    {
        cout<<b<<" greater than "<<a;
    }
    

    return 0;
}