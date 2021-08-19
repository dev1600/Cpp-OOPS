#include<iostream>
#include<cstring>
using namespace std;


/*Rules for virtual functions
1.They cannot be static
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.A virtual function in base  class might not be used 
5.If a virtual function is defined in base class there is no necessity to re-define it
  in derived class.*/
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title=s;
            rating =r;
        }
    virtual void display(){}
};

class CWHVideo: public CWH{
    float length;
    public:
        CWHVideo(string s,float r,int l):CWH(s,r){
            length=l;
        }
        void display(){
            cout<<"This is good "<<title<<endl;
            cout<<"Rating "<<rating<<endl;
            cout<<"Length "<<length<<endl;
        }
};
class CWHText:public CWH
{
    int word;
    public:
        CWHText(string s,float r,int wc):CWH(s,r){
            word=wc;
        }
    void display(){
        cout<<"This is good "<<title<<endl;
        cout<<"Rating "<<rating<<endl;
        cout<<"Words "<<word<<endl;
    }
};
int main(){

    string title;
    float rating,vlen;
    int words;
    title="Hello Sexi!!!";
    vlen=4.56;
    rating=4.71;
    words=150;
    CWHVideo video(title,rating,vlen);
    //video.display();
    rating=4.4;
    CWHText text(title,rating,words);
    // text.display();

    //The below command executes the respective deriived
    //class function as base class display is declared virtual
    CWH* ptr[2];
    ptr[0]=&video;
    ptr[1]=&text;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}