#include <stdio.h>
int main()
{
    int arr[10]={234,2345,643,5342,56456,7542,324,1,567,10};
    int max=arr[0];
    int i=1;
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}