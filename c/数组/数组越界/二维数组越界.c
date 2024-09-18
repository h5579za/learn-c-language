#include <stdio.h>

int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i=0;
    int j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}