#include <iostream>
using namespace std;

/*
Case 1:
class B: public A{
    //ordre of execution of constructor -> first A() and then B()
};

Case 2:
Class A:public B,public C{
    //Order of excecution of constructor -> B() and the C() and A()
};

Case 3:
class A:public B,virtual public C{
    //Order of execution of constructor -> C()(since it is virtual),B() and A()
};
*/
class Base1
{
    int data1;

public:
    Base1(){}
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }
    void printData()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(){}
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }
    void printData()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
    }
    Derived(int a, int b, int c) : Base1(a)
    {
        derived1 = b;
        derived2 = c;
    }
    void printData()
    {
        Base1::printData();
        Base2::printData();
        cout << "The value of derived class is " << derived1 << " " << derived2 << endl;
    }
};

int main()
{
    //Following is exammple is constructor overloading
    // Derived dr(10, 20, 30, 40);
    Derived dr(10,20,30);
    dr.printData();
    return 0;
}