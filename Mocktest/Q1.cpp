// main.cpp
#include <iostream>
using namespace std;
class My_String
{
    string name;

protected:


public:
    My_String(string nam)
    {
        this->name = nam;
    }
    void capitalize(void)
    {
        int length = 0;
        for (int i = 0; this->name[i] != '\0'; i++)
        {
            length++;
        }
        cout << "Length: " << length << endl;
        for (int j = 0; j <= length; j++)
        {
            /* code */
            char ch = this->name[j];
            if (ch >= 97 && ch <= 122)
            {
                this->name[j] = this->name[j] - 32;
            }
        }
        cout << "Captialize: " << this->name << endl;
    }
};
int main()
{
    // Your code goes here
    My_String s1("Renga Punga");
    s1.capitalize();
    return 0;
}