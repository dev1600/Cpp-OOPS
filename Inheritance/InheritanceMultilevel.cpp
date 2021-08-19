#include <iostream>
using namespace std;

class Students
{
protected:
    int roll_no;

public:
    void setRollNo(int);
    void getRollNo();
};
void Students ::setRollNo(int a)
{
    roll_no = a;
}
void Students ::getRollNo()
{
    cout << "Roll no is " << roll_no << endl;
}

class Exam : public Students
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks();
};
void Exam ::setMarks(float a, float b)
{
    maths = a;
    physics = b;
}

void Exam ::getMarks()
{
    cout << "The marks in Math is " << maths << endl;
    cout << "The marks in Physics is " << physics << endl;
}
class Result : public Exam
{
    float per;

public:
    void display();
};
void Result ::display()
{
    getRollNo();

    getMarks();
    cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
}
int main()
{
    Result dev;
    dev.setRollNo(10);
    dev.setMarks(76.5, 97);
    dev.display();
    return 0;
}