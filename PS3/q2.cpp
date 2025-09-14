#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
      float balance;
    public:
      void setbalance(float bal)
      {
        this->balance = bal;
      }
      void getBalance(void)
      {
        cout<<"balance: "<<this->balance<<endl;
      }
};
int main()
{
    BankAccount b1;
    float bal;
    cout<<"enter your balance: ";
    cin>>bal;

    if (bal >= 0)
    {
        b1.setbalance(bal);
        b1.getBalance();
    }
    else
    {
        cout<<"enter positive balance.";
    }

    return 0;
}