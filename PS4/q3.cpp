#include <iostream>
using namespace std;
class complex
{
  int real;
  int img;

public:
  complex()
  {
    this->img = 0;
    this->real = 0;
  }
  complex(int r)
  {
    this->real = r;
    this->img = 0;
  }
  complex(int r, int i)
  {
    this->img = i;
    this->real = r;
  }
  void get(void)
  {
    cout << "complex num: " << this->real << " + " << this->img << "i" << endl;
  }
};
int main()
{
  // Your code here
  complex c1, c2(2), c3(4, 5);
  c1.get();
  c2.get();
  c3.get();
  return 0;
}