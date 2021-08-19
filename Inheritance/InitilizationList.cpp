#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
//Below is another way of initilization 
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor" << endl;
        cout << "Value of a " << a
             << " Value of b " << b <<endl;
    }
};
int main()
{
    Test t(10,20);
    return 0;
}