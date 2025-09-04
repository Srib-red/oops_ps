#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int reverse = 0, remain;

    int temp = n;

    while (temp != 0)
    {
        remain = temp % 10;
        reverse = reverse * 10 + remain;
        temp = temp/10;
    }

    // cout<<reverse<<endl;

    if (n == reverse)
    {
        cout<<n<<" is a palindrome"<<endl;
    }
    else
    {
        cout<<n<<" is not same as "<<reverse<<endl;
    }
    return 0;
}