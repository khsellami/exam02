#include <unistd.h>

int iscapital(char c)
{
    return(c >= 'A' && c <= 'Z');
}
int main(int argc,char *argv[])
{
    int i=0;
    if(argc==2)
    {
        while(argv[1][i])
        {
            if(iscapital(argv[1][i]))
            {
                argv[1][i] += 32;
                write(1,"_",1);
                write(1,&argv[1][i],1);
            }
            else
                write(1,&argv[1][i],1);
            i++;
        }
    }
    return 0;
}