#include<iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned int y=0xFF00FF00;
    std::bitset<32> x(y); // to print in binary
    cout<<x<<endl;
    x=y^0xFFFFFFFF; //  x^1s = ~x
    //std::bitset<32> x(y);
    cout<<x<<endl;
    return 0;
}
