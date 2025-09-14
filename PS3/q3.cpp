#include<iostream>
#include<string>
using namespace std;
class Book{
    private:
    string Tittle;
    float price;
    public:
    void setter(string t, float a)
      {
        this->Tittle = t;
        this->price = a;
      }
    void getter(void)
      {
        cout<<"Book name: "<<this->Tittle<<endl<<"Book price: $"<<this->price<<endl;
      }
};
int main(){
    Book b1;
    b1.setter("Beauty and the Beast", 112.5);
    b1.getter();
return 0;
}