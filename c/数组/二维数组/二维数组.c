#include <stdio.h>

int main()
{
    int arr[3][4]={1,2,3,4,2,3,4,5,3,4,5,6};
    int arr1[5][9]={{1,2},{3,4},{5,6},{7,8},{9,0}};
    int i=0;
    int j=0;
    int count=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d ",arr1[i][j]);
            count++;
        }
        printf("\n");
    }
    // printf("%d\n",count);
    return 0;
}