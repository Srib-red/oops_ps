#include<iostream>
using namespace std;
int main(){
    float n;
    do
    {
        /* code */
        cout<<"enter a number : ";
        cin>>n;
        
        if (n < 0)
        {
            break;
        }    
    } while (true);
    return 0;
}

