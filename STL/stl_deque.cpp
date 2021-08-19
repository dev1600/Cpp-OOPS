#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" "<<endl;
    }
    cout<<"back="<<d.back()<<endl;
    d.pop_back();
    d.pop_front();
    //returns 1 if empty else 0
    cout<<"Is empty "<<d.empty()<<endl;
    d.push_back(3);
    d.push_front(2);
    cout<<"Size "<<d.size()<<endl;
    cout<<"Print First index element "<<d.at(1)<<endl;
    for(int i:d){
        cout<<i<<" "<<endl;
    }
    //delete elements
    //delete 1st element 
    cout<<"After deletion"<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d){
        cout<<i<<" "<<endl;
    }
}