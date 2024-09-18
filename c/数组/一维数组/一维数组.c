#include <stdio.h>
int main()
{
    int arr[10]={1,2,3};
    int arr1[10]={1,2,3,4,5,6,7,8,9,0};
    int arr2[]={1,2,3};
    char ch1[10]={'a','b','c'};
    char ch2[10]="abc";
    int i=0;
    int sz=sizeof(arr2)/sizeof(arr2[0]);
    //算出数组个数
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}