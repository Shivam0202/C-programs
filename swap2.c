#include <stdio.h>

int main()

{

int V1, V2, V3;

printf("Enter the Values\n");

scanf("%d %d", &V1, &V2);
 V3=V1;
 V1=V2;
 V2=V3;
 printf("The value of V1 is%d and value of V2 is %d",V1,V2);
}