#include <stdio.h>
int main()
{
    int i=0;
    for(i=1;i<=9;i++)
    {
        int j=0;
        for(j=1;j<=i;j++)
        printf("%d*%d=%-2d\t",i,j,i*j);
        printf("\n");
    }
    return 0;
}


//%2d右对齐
//%-2d左对齐