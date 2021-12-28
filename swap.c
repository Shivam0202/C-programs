#include<stdio.h>
int main()
{
    int a,b;
    a =7;
    b=8;
    a = b-a;
    b = b-a;
    a =a+b;
    printf(" The new value of a is %d and new value of b is  %d",a,b);
    return 0 ;
}