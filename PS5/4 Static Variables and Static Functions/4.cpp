#include<iostream>
using namespace std;
void retain_func(void){
    static int count = 0;
    count++;
    cout<<"counter: "<<count<<endl;
}

int main()
{
    retain_func();
    retain_func();
    retain_func();
    return 0;
}