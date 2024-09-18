#include <stdio.h>
int main()
{
    int arr[3][4]={0};
    int sz=sizeof(arr);
    printf("%d\n",sz);
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));//arr[0]是第一行数组名 48/16
    //算行数
    printf("%d\n",sizeof(arr[0])/sizeof(arr[0][0]));//16/4
    //算列数
    return 0;
}