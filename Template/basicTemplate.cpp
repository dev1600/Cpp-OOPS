#include <iostream>
using namespace std;

//Below means wherever I write T it will start type casting
//we generally name T for template as it is standard for type
template<class T>
class vector{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size=m;
            arr=new T[size];
        }
        T dotProduct(vector &v)
        {
            T dot=0;
            for(int i=0;i<size;i++)
            {
                dot+=this->arr[i]*v.arr[i];
            }
            return dot;
        }
};
int main(){
    //Whenever I make a class of template then i need to identify the type
    vector<float>v1(3);
    v1.arr[0]=1.1;
    v1.arr[1]=3.67;
    v1.arr[2]=6.99;
    vector<float>v2(3);
    v2.arr[0]=2.23;
    v2.arr[1]=4.57;
    v2.arr[2]=5.92;
    cout<<v1.dotProduct(v2)<<endl;

}
