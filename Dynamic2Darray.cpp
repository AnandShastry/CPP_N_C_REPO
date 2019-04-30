#include<iostream>
#include<array>


using namespace std;

char** getArray(int size)
{
    char ch;
    cout<<"start entering names\n";
    char** carr=new char*[size];
    for(int i=0;i<size;i++)
    {
        carr[i]=new char[size];
        for(int j=0;j<size;j++)
        {
            cin>>ch;
            carr[i][j]=ch;
        }
    }
    return carr;
}

int main()
{
    int size;
    cout<<"Enter size\n";
    cin>>size;
    cout<<size<<"\n";

    char **str=getArray(size);

    cout<<"Enter array\n";
    for(int i=0;i<size;i++)
    {
        cout<<"\n";
        for(int j=0;j<size;j++)
        {
            cout<<str[i][j]<<"\t";
        }
        
    }

    return 0;
}
