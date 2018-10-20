#include<stdio.h>

static int data=5;

void counter()
{
    static int data=5;
    printf("Address of local static:%x\n",&data);
    data++;
    printf("content of local static:%d\n",data);
}

int main(int argc, char const *argv[])
{
    int i=5;
    while(i>=0)
    {
        counter();
        i--;
    }

    printf("Address of global static:%x\n",&data);
    printf("content of global static:%d\n",data);
    return 0;
}
