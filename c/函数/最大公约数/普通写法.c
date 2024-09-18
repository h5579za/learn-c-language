#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0;
    int b=0;
    scanf("%d%d",&a,&b);
    int min=(a<b)?a:b;
    int m=min;
    while(1)
    {
        if(a%m==0&&b%m==0)
        {
            break;
        }
        m--;
    }
    printf("%d\n",m);
    return 0;
}