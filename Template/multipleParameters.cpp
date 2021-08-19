#include <iostream>
using namespace std;

//Following is a way to create mulitple templates
template<class T1,class T2>
class Data{
    public:
        T1 d1;
        T2 d2;
        Data(T1 a,T2 b)
        {
            d1=a;
            d2=b;
        }
        void display()
        {
            cout<<d1<<endl<<d2<<endl;
        }
};
int main(){
    Data<float,string> obj(1.41,"hello");
    obj.display();
    return 0;
}