#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<<"enter a number: ";
    cin>>n;

    for (int i = n; i > 0; i--)
    {
        sum = sum + i;
    }

    cout<<"sum: "<<sum<<endl;
    
    return 0;
}

