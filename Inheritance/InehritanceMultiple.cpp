#include <iostream>
using namespace std;

class Base1{
    protected:
        int _base1;
        public:
            void set_Base1(int a){
                _base1=a;
            }
};
class Base2{
    protected:
        int _base2;
    public:
        void set_Base2(int a){
            _base2=a;
        }
};
//Multiple Inheritance
class Derived: public Base1,public Base2{
    public:
        void show(){
            cout<<"the value of Base 1 is "<<_base1<<endl;
            cout<<"the value of Base 2 is "<<_base2<<endl;
            cout<<"the sum of Base 1 and Base 2 is "<<_base1+_base2<<endl;
        }
};
/*
The inherited class Derived will look something like 
_base1- It will be protected 
_base2- It will also be protected 
set_Base1(int)- It will be public
set_Base2(int)-it will be public 
*/
int main(){
    Derived dr;
    dr.set_Base1(10);
    dr.set_Base2(25);
    dr.show();
    return 0;
}