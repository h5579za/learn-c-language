#include <stdio.h>
int main()
{
    char arr[]={"abcdef"};// a b c d e f /0
    int sz=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=sz-2;// 减去/0和0两个下标
    while(left<right)
    {
        char tmp=arr[left];
        arr[left]=arr[right];
        arr[right]=tmp;
        left++;
        right--;
    }
    printf("%s\n",arr);
    return 0;
}