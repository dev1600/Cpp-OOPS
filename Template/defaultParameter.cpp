#include <iostream>
using namespace std;

//Below assigns default value to the variables if not specified otherwise
template<class T1=int, class T2=float>
class Default{
    public:
        T1 data1;
        T2 data2;
        Default(T1 a,T2 b)
        {
            data1=a;
            data2=b;
        }
        void display();
};
//We can also write display func as below
//Default function cannot be defined out side the class
template<class T1, class T2>
void Default<T1,T2>::display()
{
    cout<<data1<<endl<<data2<<endl;
}
int main(){
    // nothing is passed then it sets default as int and float as stated above
    //if we send incompatible data type it wont show error hence would be a
    // logical error and would 'misbehave'
    Default< > obj(1,10.5);
    obj.display();
    Default <string,int> obj2("Hello",2);
    obj2.display();
}