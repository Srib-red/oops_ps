#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int a1 = 0, a2 = 1,a3;
    
    cout<<a1<<endl;
    cout<<a2<<endl;

    for (int i = 2; i < n ; i++)
    {
       a3 = a1 + a2;
       cout<<a3<<endl;
       a1 = a2;
       a2 = a3;
    }
    return 0;
}