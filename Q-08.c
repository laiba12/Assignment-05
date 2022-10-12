//Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int a=1,n,b;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(a<=n)
    {
        b=a*a;
        printf("%d\n",b);
    a++;
    }
    return 0;
}
