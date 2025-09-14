#include<iostream>
#include<string>
using namespace std;
class circle{
    private:
      float radius;
    public:
      void getradius(int rad)
      {
        this->radius = rad;
      }
      void getarea(void){
        cout<<"area: "<<3.14*this->radius*this->radius;
      }

};
int main(){
    circle c1;
    float rad;
    cout<<"enter radius: ";
    cin>>rad;
    c1.getradius(rad);
    c1.getarea();
    return 0;
}