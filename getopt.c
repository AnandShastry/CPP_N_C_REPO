#include<stdio.h>
#include<string.h>
#include <unistd.h>  


int main(int argc, char **argv)
{
    int opt;
    char filename[] ={'\0'};
    while((opt=getopt(argc,argv,":f:"))!=-1)
    {
        switch (opt)
        {
            case 'f'/* constant-expression */:
                /* code */
                strcpy(filename,argv[2]);
                printf("%s\n",filename);
                break;
        
            default:
            printf("Invalid\n");
                break;
        }
    }
    return 0;
}
