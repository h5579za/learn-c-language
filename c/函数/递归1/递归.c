#include <stdio.h>

int main()
{
    unsigned int num=0;
    scanf("%u",&num);
    while(num)
    {
        printf("%d ",num%10);
        num=num/10;
    }
    return 0;    
}