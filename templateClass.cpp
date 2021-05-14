#include<iostream>


using std::cout;
using std::cin;
using std::endl;


template<class T>
class myClass
{
    public:
    T id;
    static int statData;
    myClass();
    
    ~myClass()
    {

    }
};
template<class T>
myClass<T>::myClass()
{
   cout<<"constructor\n";
}
template<class T>
int myClass<T>::statData=0;

int main()
{
    myClass<int> itr;
    myClass<float> itf;
    cout<<&myClass<int>::statData<<endl;
    cout<<&myClass<float>::statData<<endl;
    myClass<int>::statData++;
    myClass<int>::statData++;
    myClass<float>::statData++;
    cout<<myClass<int>::statData<<endl;
    cout<<myClass<float>::statData<<endl;
    return 0;
}