//Write a program to print the first N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the number= ");
    scanf("%d",&a);
    printf("Odd numbers in reverse order are:\n");
    for(i=a;i>=1;i-=2)
    {
    printf("%d\n",i);
    }
    return 0;

}