#include <iostream>
using namespace std;
class bank_ac
{
    int account_num;
    float balance;

public:
    bank_ac()
    {
        this->account_num = 0;
        this->balance = 0;
    }
    bank_ac(int ac)
    {
        this->account_num = ac;
        this->balance = 0;
    }
    bank_ac(int ac, float bal)
    {
        this->account_num = ac;
        this->balance = bal;
    }
    void set_after_intialization(int ac1, float bal1)
    {
        this->account_num = ac1;
        this->balance = bal1;
    }
    void get(void)
    {
        cout << "Account No.: " << this->account_num << " | Account Balance: $" << this->balance << endl;
    }
};
int main()
{
    // Your code here
    bank_ac b1, b2(123, 56.5), b3(78);
    b1.get();
    b3.get();
    b2.get();

    b1.set_after_intialization(23, 478.9);
    b2.set_after_intialization(111, 456.8);

    b1.get();
    b2.get();

    return 0;
}