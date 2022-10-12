//Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int a=0,n;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("%d\n",a);
    a+=2;
    }
    return 0;
}