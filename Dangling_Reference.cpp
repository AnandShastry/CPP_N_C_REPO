// Program to demostrate pass by reference and dangling reference


#include<iostream>
#include<stdio.h>

using namespace std;

void passbyref(int &a)
{
    cout<<"Address of:"<<&a<<endl;    
}

int& danglingRef(void)
{
    int i=0;
    i++;
    return i; // returning local varible , once function returns from here stack frame gets deleted,
              // causing condtion of "DANGLING REFERENCE"
}

int main(int argc, char const *argv[])
{
    int b=10;
    int &r=danglingRef(); // dangling reference
    int &ref=b;
    cout<<"Address of in main:"<<&b<<endl;
    cout<<"Address of in ref:"<<&ref<<endl;
    cout<<"content of in r:"<<r<<endl; // This line causes core dump, because of dangling reference. comment before running
    passbyref(b);

    return 0;
}
