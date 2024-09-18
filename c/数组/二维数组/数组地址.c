#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int arr[3][4]={1,2,3,4,2,3,4,5,3,4,5,6};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
        }
    }
    return 0;
}