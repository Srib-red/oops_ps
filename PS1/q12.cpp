#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    float D;
    float r1, r2;
    cout<<"enter the coeff of quadratic equations : "<<endl;
    cin>>a>>b>>c;
    D = (b*b)-4*a*c;
    r1 = (-b+sqrt(D))/(2*a);
    r2 = (-b-sqrt(D))/(2*a);

    if (D > 0)
    {
     cout<<"the roots are real, "<< r1 << " and " << r2;
    }
    else if (D == 0)
    {
     cout<<"the roots are real and equal, "<<r1<<" and "<<r2;
    }
    else
    {
     float D1 = -D;
    //  float r1i = (-b+sqrt(D1))/(2*a);
    //  float r2i = (-b-sqrt(D1))/(2*a);
     cout<<"the roots are imaginary and are, "<<-b/(2*a)<<" + i"<<sqrt(D1)/(2*a)<<" and "<<-b/(2*a)<<" - i"<<sqrt(D1)/(2*a);
    }
    
    

return 0;
}