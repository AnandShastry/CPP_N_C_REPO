#include<iostream>
#include<vector>
#include<thread>
#include<mutex>

using namespace std;

class CirQ
{
    private:
    vector<int> qI;
    mutex mut;
    short counter;
    
    //Will make it singleton class to ease the Q handling
    static CirQ* cirQinst;
    CirQ(){}
    ~CirQ(){}
    CirQ(const CirQ&){}

    public:
    
    static CirQ* getInst()
    {
        if(CirQ::cirQinst == NULL)
        {
            CirQ::cirQinst=new CirQ();
        }
        return cirQinst;
    }



    mutex& getMutex()
    {
        return mut;
    }

    void writeData(int data)
    {
        if(counter >= 0 && counter <10)
        {
            qI[counter]=data;
            cout<<"Data:"<<data<<endl;
            
            cout<<"Counter:"<<counter<<endl;
            counter++;
        }
        else
        {
            counter%=10;
            cout<<"---------Counter else----------:"<<counter<<endl;
            //qI.resize(10);
            qI[counter]=data;
        }
        
    }
    void initQue()
    {
        counter=0;
        qI.clear();
        qI.resize(10);
    }

    void print()
    {
        for(auto i:qI)
            cout<<i<<endl;
    }
};

CirQ* CirQ::cirQinst=NULL;

void threadFunc(int num)
{
    std::lock_guard<mutex> lock(CirQ::getInst()->getMutex());
    cout<<"Writing data:"<<num<<endl;
    CirQ::getInst()->writeData(num);
    cout<<"Wrote data:"<<num<<endl;
}
int main()
{
    CirQ::getInst()->initQue();
    thread t1[15];
    for(int i=0;i<15;i++)
    {
        t1[i]=thread(threadFunc,i);
        t1[i].join();
    }
    

    CirQ::getInst()->print();
}
