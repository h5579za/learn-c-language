#include <stdio.h>
int count=0;
int fib(int n)
{
    if(n==3)
        count++;
    if(n<=2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int n=0;
    scanf("%d",&n);
    int ret=fib(n);
    printf("%d\n",ret);
    
    printf("%d\n",count);

    return 0;
}