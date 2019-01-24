#include<stdio.h>

extern int *ptr;
void func()
{
    printf("ptr=%d\n",*ptr);

}