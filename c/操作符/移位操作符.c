#include <stdio.h>
int main()
{
    int a=8;
    int b=a >> 2;
    int c=5;
    c=c>>1;
    //移位移动的是补码
    printf("%d %d %d\n",a,b,c);
    return 0;
}