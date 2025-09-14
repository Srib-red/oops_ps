#include<iostream>
#include<string>
using namespace std;
class car{
    private:
      string Brand;
      string model;
    public:
      void setter (string B, string m){
        this->Brand = B;
        this->model = m;
      }
      void getter(void){
        cout<<"Car Brand: "<<this->Brand<<endl<<"Car model: "<<this->model<<endl;
      }
};
int main(){
    car car_arr[4];
  
    car_arr[0].setter("Lamborgini", "Huracan");
    car_arr[0].getter();

    car_arr[1].setter("Land rover", "Defender");
    car_arr[1].getter();

    car_arr[2].setter("Volkswagen", "Beetle");
    car_arr[0].getter();

    car_arr[0].setter("Porsche", "911gt");
    car_arr[0].getter();
    
    return 0;
}