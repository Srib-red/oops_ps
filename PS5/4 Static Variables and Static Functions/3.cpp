#include<iostream>
using namespace std;
class Bank_Account{
    float principal_amount;
    int years;
    float return_value;
    static float rate;
    public:
        Bank_Account(float p,int y){
            this->principal_amount = p;
            this->years = y;
            this->return_value = 0;
        }
        void calculate_return_value(void){
            return_value = principal_amount;
            for (int i = 0; i < years; i++)
            {
                return_value = return_value + (return_value*rate);
            }
            cout<<"return value is: "<<this->return_value<<endl;
        }
};
float Bank_Account ::rate = 0.04;
int main()
{
    Bank_Account b1(1000, 4);
    b1.calculate_return_value();
    return 0;
}