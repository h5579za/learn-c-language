#include <stdio.h>
int main()
{
    int arr[10];
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    //十进制的0x28，就是40
    
    //上面两个打印地址是一样的
    int n=sizeof(arr);
    printf("%d\n",n);
    //40,数组内有十个整形，每个是4字节
    return 0;
}