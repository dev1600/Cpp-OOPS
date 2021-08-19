#include <iostream>
using namespace std;

/*Here virtual keyword is used to resolve ambiguity that arises
if we inherit two classes which are inheriting the same base class. */
class Student
{
protected:
    int roll_no;

public:
    void setNumber(int x)
    {
        roll_no = x;
    }
    void print_no()
    {
        cout << "YOUR roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void setMarks(float a, float b)
    {
        math = a;
        physics = b;
    }
    void printMarks()
    {
        cout << "Your result is" << endl
             << "Maths: " << math << endl
             << "Physic: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = math + physics + score;
        print_no();
        printMarks();
        printScore();
        cout << "Your total score is " << total << endl;
    }
};
int main()
{
    Result rs;
    rs.setMarks(95.0, 88.5);
    rs.setNumber(34);
    rs.setScore(10);
    rs.display();
    return 0;
}