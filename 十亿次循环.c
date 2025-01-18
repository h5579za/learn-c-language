#include<stdio.h>
#include<time.h>
int main()
{
    clock_t start_t, end_t;
    double total_t;
    int a=0;
    start_t=clock();
    for(a=0;a<=1000000;a++)
    {
        printf("%d\n",a);
    }
    end_t=clock();
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("%f\n", total_t);
    return 0;
}