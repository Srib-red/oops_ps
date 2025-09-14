#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    int id;
    float salary;
    public:
      void setter(int i, float s)
      {
        this->id = i;
        this->salary=s;
      }
      void getter(void)
      {
        cout<<"Employee_ID: "<<this->id<<endl<<"Employee salary: $"<<this->salary<<endl;
      }
};
int main(){
    employee e1,e2,e3;
    e1.setter(12,124500.5);
    e1.getter();

    e2.setter(13,15578.3);
    e2.getter();

    e3.setter(55,567.2);
    e3.getter();

    return 0;
}