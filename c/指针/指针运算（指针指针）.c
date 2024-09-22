#include<stdio.h>
int main()
{
    int arr[10]={0};
    printf("%d\n",&arr[9]-&arr[0]);
    printf("%d\n",&arr[0]-&arr[9]);
    //减去的是元素的个数
    return 0;
}