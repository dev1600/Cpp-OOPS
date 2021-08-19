#include<string>
#include<iostream>
using namespace std;
int main(){
    string s="Hello";
   // getline(cin,s);//Getline is used to inout a sentence
    cout<<s<<endl;

    string str1,str2;
    str1="xyz";
    str2="xyz";
    str1.append(str2);
    string str=str1+str2+"s";
    cout<<str<<endl;
    cout<<str1.compare(str2)<<endl; //if str1 = str2 output will be 0

    s.erase(2,2);//first argument is starting index and second argument no of characters to be deleted from that index
    cout<<s<<endl;
    //In find there is optional second argument which can be used to find 2nd,3rd... so on occurence of substring
    cout<<str1.find("yz")<<endl;//Finds the index of first occurrence of substring
    s="hello";
    string st=s.substr(1,3);//First arguemnt is index and second is length of char to extract 
    cout<<st<<endl;

    //stoi() is used to convert string to integer and to_string is used to convert int to string
    return 0;
}