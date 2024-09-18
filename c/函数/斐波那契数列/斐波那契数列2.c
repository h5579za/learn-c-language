#include <stdio.h>
int count=0;
int fib(int n)
{
    int a=1;
    int b=1;
    int c=1;
    
    while(n>=3)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
        count++;
    }
    return c;
}

int main(int argc, const char * argv[]) {
    int n=0;
    scanf("%d",&n);
    int ret=fib(n);
    printf("%d\n",ret);
    printf("%d\n",count);
    return 0;
}