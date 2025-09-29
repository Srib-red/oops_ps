// 1. Custom List
// Create a class MyList to store integers.
// • Support operations to add an element at the end, insert at a specific position, delete
// an element, search for an element, and display all elements.
// • Provide a function to return the current size of the list.
#include <iostream>
using namespace std;
class Mylist
{
    int *arr = nullptr;
    int size;

public:
    Mylist(int siz)
    {
        this->size = siz;
        this->arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "enter arr[" << i << "]: ";
            cin >> this->arr[i];
        }
        print_list();
    }
    void print_list(){
        cout<<"Mylist: ";
        for (int i = 0; i < size ; i++)
        {   
            cout<<this->arr[i]<<"  ";
        }
        cout<<endl;
        
    }
    void append(void){

        int x;
        cout<<"enter new element: ";
        cin>>x;
        
        int * newarray = nullptr;
        newarray = new int[size+1];

        for (int  i = 0; i < size; i++)
        {
           newarray[i] = arr[i];
        }
        newarray[size] = x;

        delete[] arr;
        arr = newarray;
        newarray = nullptr;
        
        this->size = this->size+1;

        print_list();
    }
    void insert(){
        int pos, val;
        cout << "Enter position (0 to " << size << "): ";
        cin >> pos;
        cout << "Enter value: ";
        cin >> val;
        
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!\n";
            return;
        }

        int * newarray = nullptr;
        newarray = new int[size+1];

        for (int  i = 0; i < size; i++)
        {
           newarray[i] = arr[i];
        }

        newarray[pos] = val;

        for (int i = pos+1; i < size; i++)
        {
           newarray[i+1] = arr[i];
        }
        
        delete[] arr;
        arr = newarray;
        size++;

        print_list();
    }

        void remove() {
        int pos;
        cout << "Enter position to delete (0 to " << size - 1 << "): ";
        cin >> pos;

        if (pos < 0 || pos >= size) {
            cout << "Invalid position!\n";
            return;
        }

        int *newarray = new int[size - 1];

        for (int i = 0; i < pos; i++)
            newarray[i] = arr[i];

        for (int i = pos + 1; i < size; i++)
            newarray[i - 1] = arr[i];

        delete[] arr;
        arr = newarray;
        size--;

        print_list();
    }

    ~Mylist(){
        delete[] arr;
        arr = nullptr;
        cout<<"destructor has been called.\n";
    }
};
int main()
{
    Mylist m1(3);
    m1.append();

    return 0;
}