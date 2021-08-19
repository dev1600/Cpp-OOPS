#include<iostream>
using namespace std;

class A{
    int x;
    int y;
    public:
        A(int x){
            this->x=x;
        }
        A(int x,int y){
            this->x=x;
            this->y=y;
        }
        void Get(){
            cout<<x<<" "<<y<<endl;
        }
};
int main(){
    //Polymorphism one name multiple form
    //Ex-Function overloading,operator overloading(Compile time)
    //Function overrriding(Runtime)
    //In compile time we already know the function compiler has to 
    //execute
    //Runtime polymorphism is acheived through virutal function
A a(10);
a.Get();
A b(30,40);
b.Get();

}