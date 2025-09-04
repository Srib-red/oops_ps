#include<iostream>
using namespace std;
int main(){

    for (int j = 1; j < 101; j++)
    {
       bool isprime = true;
       for (int i = 2; i*i<=j ; i++)
       {
        if(j%i == 0)
        {
            isprime = false;
            break;
        }
       }
    
    if (isprime == true)
    {
        cout<<j<<endl;
    }
    }
    return 0;
}