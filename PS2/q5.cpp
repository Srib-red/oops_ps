#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a natural number: ";
    cin>>n;

    int fact = 1;

    int i = n;
    while (i > 0)
    {
        /* code */
        fact = fact * i;
        i--;
    }
    
    cout<<n<<"!: "<<fact<<endl;
    return 0;
}

