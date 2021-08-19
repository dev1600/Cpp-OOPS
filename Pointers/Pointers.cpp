#include<iostream>
using namespace std;

int main(){
//Dynamically creates a variable with value 15
    int *p=new int(15);
    //Similaryly can be done for float ,double ,bool etc
    cout<<"value at p is "<<*p<<endl;
    //following creates an array of size 3
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"The value of arr at 0 is "<<arr[0]<<endl;
    //if i delete arr then it will free memory
    //that is dynamically allocated memory
    //delete[] arr;
    return 0;
}
