#include <stdio.h>
int main()
{
    int a=2;
    int b=++a;//先++后使用
    int c=5;
    int d=c++;//先使用后++
    printf("%d %d\n",a,b);
    printf("%d %d\n",c,d);
}