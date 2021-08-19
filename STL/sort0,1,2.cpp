#include<iostream>
#include<algorithm>
using namespace std;

void sort012(int a[], int n)
{   
   int low=0;
   int mid=0;
   int high=n-1;
   while(mid<=high)
   {
       if(a[mid]==0)
       {
           swap(a[low],a[mid]);
           low++;
           mid++;
       }
       else if(a[mid]==2)
       {
           swap(a[high],a[mid]);
           high--;
       }
       else {
           mid++;
       }
   }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort012(arr,n);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}