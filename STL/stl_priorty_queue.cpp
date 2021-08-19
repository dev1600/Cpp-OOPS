#include <iostream>
#include <queue>
using namespace std;
int main(){
    //MAX HEAP-LARGEST ELEMENT at front
    priority_queue<int>maxi;
    
    //MIN HEAP-SMALLEST ELEMENT at front
    priority_queue<int,vector<int>,greater<int>>min;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    //store in n because size is changing
    int n=maxi.size();
    for (int  i = 0; i < n; i++)
    {
        //First element in priority queue
        cout<<maxi.top()<<endl;
        //Remove the first element
        maxi.pop();
    }
    cout<<endl;
    min.push(5);
    min.push(4);
    min.push(1);
    min.push(0);
    int m=min.size();
    for (int i = 0; i < m; i++)
    {
        cout<<min.top()<<endl;
        min.pop();
    }

    
    

}