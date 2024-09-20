#include <stdio.h>
int main()
{
    int a=7;
    int b=1;
    int i=0;
    int count=0;
    int c=0;
    //00000000000000000000000000000101
    //00000000000000000000000000000001
    
    for(i=0;i<32;i++)
    {
        c=a&b;
        if(c==1)
        {
            count++;
        }
        a=a>>1;
    }
    printf("%d\n",count);
}