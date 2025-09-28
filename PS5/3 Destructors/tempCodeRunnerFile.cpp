class Dynamic{
    int *arr;
    int size;
    public:
    Dynamic(int n){
        this->size = n;
        arr = new int[n]();
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<"enter elememt ["<<i<<"]: ";
            cin>>*(arr + i);
        }
        cout<<"constructor has been called!!!.\n";
    }
    void print_array(void){
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