#include<iostream>
using namespace std;
int main(){
    int n, reversed = 0, remain;
    cout<<"enter a number: ";
    cin>>n;

    int temp = n;

    while (temp != 0)
    {
        /* code */
        remain = temp % 10;
        reversed = reversed*10 + remain;
        temp = temp / 10;
    }

    if (reversed == n)
    {
        cout<<n<<" is a palindrome.";
    }
    else
    {
        cout<<n<<" is not a palindrome.";
    }

    return 0;
}

