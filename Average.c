#include<stdio.h>
void main()
{
float s1,s2,s3,s4,s5,sum;
printf("Enter five numbers\n");
scanf("%f \n %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
sum = s1+s2+s3+s4+s5;
printf("The sum is %f\n",sum);
float average = sum/5;
printf( "Average is %f",average);
}