#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int largest = n%10;
    int remain;

    do
    {
        /* code */
        remain = n%10;
        if (remain >= largest)
        {
            largest = remain;
        }
        n = n / 10;
        
    } while (n != 0);

    cout<<"largest digit: "<<largest;
    
    return 0;
}

