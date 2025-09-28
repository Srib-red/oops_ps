#include<iostream>
using namespace std;
//int* a = new int;   // no initialization
//*a = 42;
// int* a = new int(); // value-initialization 0
// int* a = new int(5);   // direct-initialization
// int* arr = new int[5]{1, 2, 3, 4, 5};  // dynamic array with init list
// int* arr = new int[5]();  // all 5 elements = 0
// int* arr = new int[5];  // elements contain indeterminate (garbage) values
// int* arr = new int[5]{}; //also all zeros
class Dynamic{
    int *arr;
    int size;
    public:
    Dynamic(int n){
        this->size = n;
        arr = new int[n]();
        cout<<"constructor has been called!!!.\n";
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<"enter elememt ["<<i<<"]: ";
            cin>>*(arr + i);
        }
    }
    void print_array(void){
        cout<<"array: ";
        for (int i = 0; i < this->size; i++)
            cout << arr[i] << " ";
        cout<<endl;
    }
    ~ Dynamic(){
        delete[] arr;
        cout<<"destructor has been called###.\n";
    }
};
int main()
{
    Dynamic d1(5);
    d1.print_array();
    return 0;
}