#include<iostream>
using namespace std;
int main(){

    int sum = 0;
    for (int i = 2; i <= 100; i = i + 2)
    {
        sum+=i;
    }

    cout<<"sum: "<<sum;
    
    return 0;
}

