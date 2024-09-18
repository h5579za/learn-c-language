#include <stdio.h>

int main(void)
{
    int a=0;
    int b=0;
    scanf("%d%d",&a,&b);
    while(a%b)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    printf("%d\n",b);
    return 0;
}