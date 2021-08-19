#include <iostream>
using namespace std;

/*If a function is written in derived class with same name as parent class then
the function in derived class is executed if object is of derived class type
and vice versa.*/
/*Ambiguity arises if we inherit 2 classes having same function
name which is not defined in the derived class */
class Base1
{
public:
    void greet()
    {
        cout << "Hello Baby" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Hello Sexi!!!" << endl;
    }
};

class Derived : public Base2, public Base1
{
    int a;

public:
    void greet()
    {
        //Below is compulsory to resolve ambiguity
        Base1::greet();
        Base2::greet();
    }
};
int main()
{
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    
    cout << "Following is running from Derived class" << endl;
    Derived dr;
    dr.greet();
    return 0;
}