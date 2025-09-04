#include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout<<"enter 3 numbers: ";
    cin>>a>>b>>c;

    int largest = a;

    if(b>largest)
    {
        largest = b;
    }
    if(c>largest)
    {
       largest = c;
    }
    
    
    cout<<"largest: "<<largest;

    return 0;
}