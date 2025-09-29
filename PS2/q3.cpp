#include<iostream>
using namespace std;
int main(){
    int i = 1, n;
    cout<<"enter a number: ";
    cin>> n;
    do
    {
        /* code */
        cout<<i<<" * "<<n<<" = "<<i * n<<endl;
        i++;
    } while (i<11);
    
    return 0;
}

