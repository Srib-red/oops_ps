#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum = 0;
    int remainder;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n/10;
    }
    
    cout<<"sum is: "<<sum;

    return 0;
}