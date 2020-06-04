#include<iostream>
#include<thread>
#include<vector>

using std::cout;
using std::cin;

void func1()
{
    cout<<"I am thread func"<<"\n";
}
int main()
{
    std::vector< std::thread > workers;
   
   workers.emplace_back([](){
        cout<<"Constructing"<<"\n";
    });   // push_back cant be used when using with lambda.

    std::function<void()> func = []() {
        cout<<"constructing via Function object\n"<<"\n";
    };
    
    
    workers.push_back(std::thread(func1)); 
    
    std::thread t1(func);
    workers.push_back(std::move(t1)); // Thread objects are only movable,so std::move to be used

    for(auto &i : workers)
    {
        i.join();
    }

return 1;
}
