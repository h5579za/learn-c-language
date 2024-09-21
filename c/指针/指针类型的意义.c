#include<stdio.h>
int main()
{
    int a=0x11223344;
    //两个十六进制位数字就是一个字节
    //1个十六进制位数字可以翻译成4个二进制位
    int* pa=&a;
    char* pc=&a;
    printf("%p\n",pa);
    printf("%p\n",pa+1);
    printf("%p\n",pc);
    printf("%p\n",pc+1);
    //指针的类型决定了指针+-1操作的时候，跳过几个字节
    return 0;
}