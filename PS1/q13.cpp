#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a natural number: ";
    cin>>n;

    for (int i = 2; i*i<n ; i++)
    {
        if (n%i == 0)
        {
           cout<<"number is not a prime";
           return 0;
        }  
    }

    cout<<"number is prime";
    
    return 0;
}