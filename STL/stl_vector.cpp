#include <iostream>
#include <vector>

using namespace std;

int main(){
    //if size of array is given
    // vector<type> name(size,default value(if not mentioned 0))
    vector<int> a(5,1);
    vector<int> v;
    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(3);
    //increase in capacity goes like 1,2,4,8,16....
    cout<<"Capacity "<<v.capacity()<<endl;
    //size tells the actual amount of elements present
    cout<<"Size "<<v.size()<<endl;
    //when we pop capaicty remains same size decreases
    v.pop_back();
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;
    for (int i :v)          
    {
        cout<<i<<" "<<endl;
    }
    

}