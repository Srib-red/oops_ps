#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a natural number: ";
    cin>>n;

    int sum = 0;
    int sum_check = n*(n+1)/2;

    for (int i = n; i > 0; i--)
    {
        sum = sum + i;
    }

    cout<<"sum: "<<sum<<endl;
    cout<<"sum: "<<sum_check;

    return 0;
}