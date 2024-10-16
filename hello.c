#include<stdio.h>

int main()
{
    int a;
    a=5;
    int *ptr;
    ptr=&a;
    printf("%d",*ptr);
    int b;
    b=2;
    printf("%d",b);
    printf("%d",a+b);

}
