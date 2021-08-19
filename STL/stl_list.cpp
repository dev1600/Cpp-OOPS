#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
//Doubly linked List
int main(){
    //Similar to vecotr we can make a list of fixed size 
    //with a defauilt value
    list<int> n(5,100);//Makes 5 nodes with value 100
    list<int> l;
    /*Similar to below we have 
    pop_front() and pop_back()*/

    l.push_back(1);
    l.push_front(2);
    for(int i:l)
    {
        cout<<i<<endl;
    }
    //In below whatever iterator we send that is deleted
    l.erase(l.begin());
    cout<<"After earse"<<endl;
    for(int i:l)
    {
        cout<<i<<endl;
    }
    l.push_front(2);
     //Find pos of value 2
    //Takes linear time
    auto it=find(l.begin(),l.end(),2);
    cout<<"Iterator points to 2 "<<*it<<endl;
    
}