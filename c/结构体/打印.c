#include<stdio.h>
struct peo
{
    //成员变量
    char name[20];
    char tele[12];
    char sex[5];
    int high;
    /* data */
};
int main()
{
    struct peo p1={"张三","13344445555","男",181};
    printf("%s %s %s %d\n",p1.name,p1.tele,p1.sex,p1.high);
    return 0;
}