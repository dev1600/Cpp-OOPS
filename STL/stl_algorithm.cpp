#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    //Returns pos of element else returns 0 if not present
    cout<<"Finding 2-"<<binary_search(v.begin(),v.end(),3)<<endl;
    //Find lower bound for 6
    //Lower_bound returns iterator
    cout<<"Finding lower bound of 6-"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    //Similarly upper bound
    cout<<"Finding lower bound of 6-"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a=3;
    int b=5;
    //returns max value
    cout<<"Max "<<max(a,b)<<endl;
    cout<<"Min "<<min(a,b)<<endl;
    //swao values
    swap(a,b);
    //reverse a list/array/vector/string
    reverse(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<endl;
    }
    //Rotate 
    cout<<"After rotation"<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(auto i:v){
        cout<<i<<endl;
    }
    //Based on combination of insertion/Quick/heap sort
    sort(v.begin(),v.end());
    cout<<"After sorting"<<endl;
     for(auto i:v){
        cout<<i<<endl;
    }



   
}