#include <stdio.h>
//不创建变量，交换
int main()
{
    int a=3;
    int b=5;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d\n",a,b);
}