#include<stdio.h>
int main()
{
    int a=10;
    int* pa=&a;//pa是一级指针变量
    int** ppa=&pa;//ppa是二级指针变量
    **ppa=20;
    printf("%d\n",a);
    return 0;
}