#include<iostream>
using namespace std;
int main(){
    int a1 = 0, a2 = 1, a3, n;
    cout<<"enter the number: ";
    cin>>n;

    cout<<a1<<endl;
    cout<<a2<<endl;

    for (size_t i = 0; i < n ; i++)
    {
        a3 = a1 + a2;
        cout<<a3<<endl;
        a1 = a2;
        a2 = a3;
    }
    
    return 0;
}

