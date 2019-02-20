#include<iostream>
#include<string>


using namespace std;
class Anand
{
    public:
    string str;
    int id;

    Anand():str(nullptr),id(0)
    {
        cout<<"hi from normal"<<str<<endl;
    }

    Anand(string st):str(st),id(0)
    {
        cout<<"hi from paramet"<<str<<endl;
    }

    ~Anand()
    {

    }

    void operator+=(string st)
    {
        str=str+st;

        cout<<"Hello"<<str<<endl;
    }

    int operator+=(int i)
    {
        id=id+i;
        return id;
      //  cout<<"Hello:"<<id<<endl;
    }
};



int main()
{
    string st="Anand";
    Anand a=st;
    a+="shastry";

    a+=10;
    cout<<"overloaded:"<<a.id<<endl;
    return 0;

}
