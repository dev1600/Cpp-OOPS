#include <iostream>
using namespace std;

class Base
{
    public:
        int var_base;
        void display(){
            cout<<"Base class "<<var_base<<endl;
        }

};
class Derived : public Base
{
    public:
        int var_derived;
        void display(){
            cout<<"Base class "<<var_base<<endl;
            cout<<"Derived class "<<var_derived<<endl;
        }

};
int main()
{
    Base *base_ptr;
    Derived derive_ptr;
    //even though we have the reference of derived class
    //we can only access base class members
    //The work around this is declaring 
    //function virtual
    base_ptr=&derive_ptr;
    base_ptr->var_base=12;
    base_ptr->display();


}