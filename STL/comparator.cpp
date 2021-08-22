#include<bits/stdc++.h>
using namespace std;

struct element{
    int a;int b;
};
struct cmp{
    bool operator()(const element &a,const element &b)
    {
        if(a.a!=b.a)
        {
            return a.a>b.a;
        }
        return a.b<b.b;
    }
};
int main(){

    set<element,cmp>s;
    s.insert({10,9});
    s.insert({6,10});
    s.insert({65,0});
    s.insert({65,9});
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout<<(*i).a<<" "<<(*i).b<<endl;
    }
    return 0;
}