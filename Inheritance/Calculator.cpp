#include<iostream>
#include<math.h>
using namespace std;

class SimpleCalculator{
    protected:
        int a;
        int b;
    public:
    void setNumber(int x,int y){
        a=x;
        b=y;
    }
    int Add(){
        return a+b;
    }
    int Subtract(){
        return a-b;
    }
    int Multiply(){
        return a*b;
    }
    int Divide(){
        return (a/b);
    }
};
class ScientificCalculator: public SimpleCalculator{

    public:
        int Modulo(){
            return a%b;
        }
        int Power(){
            return pow(a,b);
        }

};
class HybridCalculator:public ScientificCalculator{
    public:
        HybridCalculator(){};
        HybridCalculator(int a,int b){
            setNumber(a,b);
        }
};
int main(){
    HybridCalculator hy(6,2);
   
    cout<<"Addition "<<hy.Add()<<endl;
    cout<<"Multiply "<<hy.Multiply()<<endl;
    cout<<"Divide "<<hy.Divide()<<endl;
    cout<<"Modulo "<<hy.Modulo()<<endl;
    cout<<"Power "<<hy.Power()<<endl;
    return 0;
}