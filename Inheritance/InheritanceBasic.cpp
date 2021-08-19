#include <iostream>
using namespace std;

 class Employee{
    public:
        float salary;
        int id;
        Employee(int i){
            id=i;
            salary=10.0;
        }
        Employee(){}
 };
 //if we inherit publicaly then base class public members become
 //public members for derived class
 //Default visibility mode is private

//If we inherit private then base class public members become 
//private members for derived class

//Private members are never inherited

//Programmer is derived class 
 
//It automatically invokes base class Constructor hence 
//always make a default constructor
class Programmer : public Employee{
    public:
        Programmer(int i){
            id=i;
        }
        int languageCode=9;

};
int main(){
    Employee dev(1);
    cout<<dev.salary<<endl;
    Programmer skill(2);
    cout<<skill.id<<endl;

    return 0;
}