#include <iostream>
#include <queue>
using namespace std;
int main(){
    //FIFO
    queue<string> q;
    q.push("Hello");
    q.push("World");
    q.push("Dev");
    cout<<"First element-"<<q.front()<<endl;
    cout<<"Size "<<q.size()<<endl;
    q.pop();
    cout<<"First element-"<<q.front()<<endl;
}