#include<iostream>
using namespace std;
int main(){
    float sum = 0,count = 0, avg;
    while (true)
    {
        float n = 0;
        cout<<"enter marks: ";
        cin>>n;

        if (n == -1)
        {
            break;
        }
        
        sum = sum + n;
        count++;
    }
    
    avg = sum / count;
    cout<<"avg marks: "<<avg<<endl;
    return 0;
}



