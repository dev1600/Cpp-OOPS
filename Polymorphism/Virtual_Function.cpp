#include<iostream>
using namespace std;

class Base
{
    public:
        int var_base=1;
        //declaring below method virtual will tell compiler that if a pointer of Base 
        // class  points to derived class object then execute derived class function
        virtual void display(){
            cout<<"Base class "<<var_base<<endl;
        }

};
class Derived : public Base
{
    public:
        int var_derived=0;
        void display(){
            cout<<"Base class "<<var_base<<endl;
            cout<<"Derived class "<<var_derived<<endl;
        }

};
int main(){
    Base *base_ptr;
    Base obj_base;
    Derived obj_derived;
    base_ptr=&obj_derived;
    base_ptr->display();
    return 0;
}