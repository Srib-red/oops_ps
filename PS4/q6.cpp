#include <iostream>
using namespace std;
class Book
{
    string author;
    string title;
    float price;

public:
    Book(string t)
    {
        this->author = "NA";
        this->title = t;
        this->price = 12.0;
    }
    Book(string t, string a)
    {
        this->author = a;
        this->title = t;
        this->price = 12.0;
    }
    Book(string t, string a, float p)
    {
        this->author = a;
        this->title = t;
        this->price = p;
    }
    void get_book(void)
    {
        cout << "| Author: " << this->author << " | Title: " << this->title << " | Price: $" << this->price << "\n";
    }
};
int main()
{
    // Your code here
    Book t1("Beauty"), t2("Rose", "Renga"), t3("Palkkad Diaries", "Sorup", 14.56);
    t1.get_book();
    t2.get_book();
    t3.get_book();
    return 0;
}