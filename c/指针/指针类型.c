#include<stdio.h>
int main()
{
    char* pa=NULL;
    short* pb=NULL;
    int* pc=NULL;
    double* pd=NULL;
    //sizeof返回的值的类型是无符号整型   unsigned int
    printf("%zu\n",sizeof(pa));
    printf("%zu\n",sizeof(pb));
    printf("%zu\n",sizeof(pc));
    printf("%zu\n",sizeof(pd));
    return 0;
}