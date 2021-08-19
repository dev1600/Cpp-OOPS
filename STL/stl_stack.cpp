#include <iostream>
#include <stack>

using namespace std;
int main(){
    //LIFO 
    stack<string>s;
    s.push("Hello");
    s.push("Baby");
    s.push("dev");
    //to get the top element
    cout<<"Top element "<<s.top()<<endl;
    //to get size
    cout<<"Size "<<s.size()<<endl;
    //to pop element
    s.pop();
    cout<<"After element is popped size is"<<s.size()<<endl;
}