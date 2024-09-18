#include <stdio.h>
#include <math.h>
double Pow(double n,double k)
{
    if(k>0)
        return n*pow(n,k-1);
    else if(k==0)
        return 1;
    else
        return 1.0/pow(n,-k);
}
int main()
{
    double n=0;
    double k=0;
    scanf("%lf%lf",&n,&k);
    double ret=Pow(n,k);
    printf("%lf\n",ret);
    return 0;
}