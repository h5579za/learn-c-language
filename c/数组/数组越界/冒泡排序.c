#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
    int i=0;
    int j=0;
    for(i=0;i<sz-1;i++)
    {
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}
int main(void)
{
    int arr[]={9,8,7,6,5,573,4,43569,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int a=0;
    bubble_sort(arr,sz);
    for(a=0;a<sz;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}