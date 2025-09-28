#include<iostream>
using namespace std;
class Counter{
    static int count;
    int a;
    public:
        static void track_calls(void){
            count++;
            cout<<"Number of calls: "<<count<<endl;
        }
        // Counter(int a){
        //     this->a = a;
        // }
};
int Counter ::count = 0;
int main()
{
    Counter ::track_calls();
    Counter ::track_calls();
    Counter ::track_calls();
    return 0;
}