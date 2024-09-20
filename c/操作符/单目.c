#include <stdio.h>
int main()
{
    int a=3;
    //a为真，进入if
    if(a)
    {}
    if(!a)
    {}

    //取地址
    int b=52;
    printf("%p\n",&b);

    //sizeof
    int c=1;
    int n=sizeof(a);//a所占内存大小，字节
    printf("%d\n",n);
    return 0;
}