#include <stdio.h>
int main()
{
    int a=3;
    int b=0;
    (a>5)?(b=3):(b=-3);
    printf("%d\n",b);
    b=(a>5?3:-3);
    printf("%d\n",b);
}