#include<iostream>
#include<string>
using namespace std;
class account{
    private:
      int account_num;
      float balance;
    public:
      void setter(int num, float bal)
      {
        this->account_num = num;
        this->balance = bal;
      }
      void getter(void)
      {
        cout<<"Account_No: ["<<this->account_num<<"] | Balance: $"<<this->balance<<endl;
      }
};
int main(){
    account a1,a2;
    a1.setter(23, 6789.5);
    a2.setter(45, 5467.0);

    a1.getter();
    a2.getter();
    
return 0;
}