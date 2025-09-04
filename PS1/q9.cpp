#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a natural number: ";
    cin>>n;

    int fact = 1;

    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }

    cout<<n<<"!: "<<fact<<endl;
    return 0;
}