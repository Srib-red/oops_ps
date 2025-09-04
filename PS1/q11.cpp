#include<iostream>
using namespace std;
int main(){
    int marks;
    while (true)
    {
    cout<<"enter marks (0-100): ";
    cin>>marks;
    if(marks >= 0 and marks <= 100)
    {
        break;
    }
    else
    {
        cout<<"enter a number between 0 - 100"<<endl;
    }
    }

    if (marks >= 90)
    {
       cout<<"Grade: A";
    }
    else if (marks>=80)
    {
        cout<<"Grade: B";
    }
    else if (marks>=70)
    {
        cout<<"Grade: C";
    }
    else if (marks>=60)
    {
        cout<<"Grade: D";
    }
    else
    {
         cout<<"Grade: F";
    }
    return 0;
}