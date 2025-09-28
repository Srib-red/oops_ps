#include<iostream>
using namespace std;
class Pub_Pri{
    string str_pri;
    friend void access_pri(Pub_Pri&);
    public:
        string str_pub;
        Pub_Pri(string s1, string s2){
            str_pri = s1;
            str_pub = s2;
        }
};
void access_pri(Pub_Pri& sec_name){
    cout<<"private and public members accessible by friend func: "<<sec_name.str_pub<<"   "<<sec_name.str_pri<<endl;
}
void access_pub(Pub_Pri& sec_name){
    cout<<"public member accessible by normy func: "<<sec_name.str_pub<<endl;
}
int main()
{
    Pub_Pri obj1("!!!Hello from private!!!.", "###Hello from Publik###.");
    access_pub(obj1);
    access_pri(obj1);
    return 0;
}