#include<iostream>
#include<map>
#include <algorithm>
using namespace std;
/*Unordered map is O(1) and all syntax remains same*/
int main(){
    //Enter <key,value> form
    //Insertion and erase is O(log n)
    //Implemented using Self balancing BST
    map<int,string>n;
    n[1]="Dev";
    n[23]="Naisha";
    n[3]="Vikram";
    //Order is in sorted 
    for(auto i:n)
    {
        //first of the pair ie it gives key
        cout<<i.first;
        //second gives value
        cout<<" "<<i.second<<endl;
    }
    //Gives position in map
    cout<<"Finding  23 "<<n.count(23)<<endl;
    n.erase(23);
    //After deletion of key value pair 23
    n[3]="RUchika";
    for(auto i:n)
    {
        //first of the pair ie it gives key
        cout<<i.first;
        //second gives value
        cout<<" "<<i.second<<endl;
    }
}    