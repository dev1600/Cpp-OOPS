#include <iostream>
using namespace std;

//Compiler doing a forward decleration in this case
class Complex;
//The above line does forward decleration of class Complex
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComponent(Complex, Complex);
};
class Complex
{
    int x, y;

public:
    //Declaring method sumNumber as Complex class's friend so it can acces private
    //data members
    friend Complex sumNumber(Complex, Complex);
    // friend int Calculator::sumRealComponent(Complex, Complex);/

    //Instead of the above we can make the whole class calculator as friend
    friend class Calculator;
    void setNumber(int data1, int data2)
    {
        x = data1;
        y = data2;
    }
    void print()
    {
        cout << x << " + i" << y << endl;
    }
};
int Calculator ::sumRealComponent(Complex a, Complex b)
{
    return (int)(a.x + b.x);
}
Complex sumNumber(Complex a, Complex b)
{
    Complex c;
    c.setNumber(a.x + b.x, a.y + b.y);
    return c;
}
int main()
{
    Complex a;
    a.setNumber(10, 5);
    a.print();

    Complex b;
    b.setNumber(2, 3);
    b.print();
    Complex sum = sumNumber(a, b);
    sum.print();

    Calculator c;
    int real = c.sumRealComponent(a, b);
    cout << "Real component sum = " << real << endl;
}