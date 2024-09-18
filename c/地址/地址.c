#include <stdio.h>

int main(int argc, const char * argv[]) {
    //传统写法
    int n=50;
    printf("%p\n",&n);
    
    //正常写法
    int *p=&n;
    printf("%p\n",p);
    
    printf("%i\n",*p);//*p代表去xx地址，不是打印地址
    
    char *s="hi";//char *=string
    printf("%s\n",s);
    
    int a=0;
    printf("%p\n",&a);
    return 0;
}
