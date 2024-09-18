#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    //算出数组个数
    for(i=0;i<sz;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}