#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    if(argc == 4)
    {
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[3]);
        if(argv[2][0] == '+')
            printf("%d",num1 + num2);
        if(argv[2][0] == '*')
            printf("%d",num1 * num2);
        if(argv[2][0] == '-')
            printf("%d",num1 - num2);
        if(argv[2][0] == '/')
            printf("%d",num1 / num2);
    }
    else
        write(1,"\n",1);
    return 0;
}