#include <iostream>
using namespace std;

class Base
{
    //Protected means it is a private variable or mmeber that can be inherited
    //from base class
protected:
    int a=10;

private:
    int b;
};

/*                      Public derivation   Private derivation   Protected Derivation

1. Private members      Not inherited       Not inherited         Not inherited
2. Protected members    Protected           Private                Protected
3. Public members       Public              Private                Protected
*/
class Derived :protected Base
{
    public:
        Derived(){
            cout<<a<<endl;
    }
};
int main()
{
    Derived dr;
}