#include<iostream>
using namespace std;
int main(){
    int a[]={5,10,15,20,0,NULL};
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=a[i];
    }
    
    cout<<sum/6<<endl;
}