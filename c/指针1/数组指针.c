#include<stdio.h>
int SumOfElements(int A[],int size)
{
    int i=0;
    int sum=0;
    for(i=0;i<size;i++)
    {
        sum+=A[i];
    }
    return sum;  
}
int main()
{
    int A[]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]);
    int total=SumOfElements(A,size);
    printf("%d\n",total);
    printf("%d\n",size);
}