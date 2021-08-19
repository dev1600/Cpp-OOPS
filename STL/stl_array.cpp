#include <iostream>
#include <array>

using namespace std;
int main(){
    //STL Array based on static array 
    int basic[3]={1,2,3};
    
    array <int,4> a={1,2,3,4};//static array rarely used 
    int size=a.size(); //Size of array
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
        
    }
    cout<<"Element at 2nd index "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;
}
