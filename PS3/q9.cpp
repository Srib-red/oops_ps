#include<iostream>
#include<string>
using namespace std;
class Temprature{
    private:
      float celcius;
    public:
      void setCelcius(float c){
        this->celcius = c;
      }
      void getFarenheit(void){
        cout<<this->celcius<<"*C -> "<<(1.8*this->celcius) + 32<<"*F"<<endl;
      }
};
int main(){
    Temprature T1;
    float temp;
    cout<<"enter temprature in degree celcius: ";
    cin>>temp;
    T1.setCelcius(temp);
    T1.getFarenheit();
return 0;
}