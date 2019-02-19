#include<iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned int y=0xFF00FF00;
    std::bitset<32> x(y);
    cout<<x<<endl;
    x=y^0xFFFFFFFF;
    //std::bitset<32> x(y);
    cout<<x<<endl;
    return 0;
}