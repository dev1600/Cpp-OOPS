#include<iostream>
#include<set>
using namespace std;
/*Set stores unique elements even if we insert 1 5 times
it stores 1 only once*/
/*It makes use of BST*/
//*Ordered set elements are sorted*/
int main(){
    //Unordered set syntax remains same
    set<int>s;
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(0);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    //Delete the 2rd element
    //instead of that we can also use 'auto'
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<"Tell if 5 present "<<s.count(5)<<endl;
    auto pos=s.find(2);
    cout<<"Elements from 2"<<endl;
    for (auto i = pos; i!=s.end(); i++)
    {
        cout<<*i<<endl;
        /* code */
    }
    
}