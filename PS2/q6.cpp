#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int reveresed = 0, remainder;
    
    do
    {
        /* code */
        remainder = n%10;
        reveresed = reveresed*10 + remainder;
        n = n/10;
    } while (n != 0);
    

    cout<<"The reverse is: "<<reveresed;

    return 0;
}

