#include <stdio.h>
#include <string.h>
void reverse(char* str)
{
    char tmp=*str;
    int len=strlen(str);
    *str=*(str+len-1);
    *(str+len-1)='\0';
    if(strlen(str+1)>=2)
    {
        reverse(str+1);
    }
    *(str+len-1)=tmp;
}
int main()
{
    char arr[]="abcdefg";//a b c d e f g \0
    reverse(arr);
    printf("%s\n",arr);
    return 0;
}