#include<iostream>
#include<string>
using namespace std;
class University{
    private:
      int ranking;
      string name;
    public:
      void setter(int rank, string name)
      {
        this->ranking = rank;
        this->name = name;
      }
      void getter(void)
      {
        cout<<"Name: "<<this->name<<" || Ranking: "<<this->ranking<<endl;
      }
};
int main(){
    University s1,s2,s3,s4;
    s1.setter(12, "Renga");
    s2.setter(22, "Balaz");
    s3.setter(34, "Aajib");
    s4.setter(15, "Sorup");

    s1.getter();
    s2.getter();
    s3.getter();
    s4.getter();
    
return 0;
}