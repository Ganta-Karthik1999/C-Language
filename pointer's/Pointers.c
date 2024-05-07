#include<stdio.h>

int main()
{
    int a=98;
    printf("%d\n",a);
    int* ptr;
    ptr =&a;
    *ptr=998;
    printf("%d",a);
    return 0;
}
