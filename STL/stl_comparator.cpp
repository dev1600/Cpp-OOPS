#include<bits/stdc++.h>
using namespace std;
bool mySwap(int a,int b)
{
    //If a>b then we swap a and b for decreasing order
    //since in built sort function wants false for swapping we return false.
    // if(a<b)
    // {
    //     return false;
    // }
    // else return true;
    //Below is a more intuitive way of remembering  here we return the condition we want to be true
    //for sorting in increasing order we want ith element > i+1 th element
    return a> b;
}
int main(){
    int a[]={4,3,5,7,22,9};
    int n=sizeof(a)/sizeof(int);
    //The in-biilt comparator functions works like- if you want to swap return false else return true
    sort(a,a+n,mySwap);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}