#include<stdio.h>
int* test()
{
    int a=10;
    return &a;
}
int main()
{
    int* p=test();
    printf("hehe\n");
    printf("hehe\n");
    if(p!=NULL)
    {
        printf("%d\n",*p);
    }
}