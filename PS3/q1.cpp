#include<iostream>
#include<string>
using namespace std;
class student{
    private:
      int age;
      string name;
    public:
      void setter(string n, int a)
      {
        this->age = a;
        this->name = n;
      } 
      void getter(void)
      {
        cout<<"Student name: "<<this->name<<endl<<"Student age: "<<this->age<<endl;
      }
};

int main(){
    student s1;
    s1.setter("Bala", 12);
    s1.getter();

    return 0;
}