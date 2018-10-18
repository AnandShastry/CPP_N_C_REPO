#include<functional>
#include<iostream>

//using namespace std;

//string "Hi" is const, so 2nd arg should be string
void func(int i, const std::string &str)
{
   std::cout<<" "<<i<<" "<<str<<std::endl; 
}


int main(int argc, char const *argv[])
{
    int i=5;
    //std::placeholders::_1 is for taking arguments from users
    auto f1=std::bind(&func,i,std::placeholders::_1);
    //sending argument, "Hi".
    f1("Hi");
    return 0;
}
