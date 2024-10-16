#include<stdio.h>

int main()
{
    int a;
    a=53;
    int *ptr;
    ptr=&a;
    printf("%d",4*(*ptr));
}

