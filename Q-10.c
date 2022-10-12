//Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int a=1,n,b;
    printf("Enter the number= ");
    scanf("%d",&n);
    printf("The table of %d is: \n",n);
    while(a<=10)
    {
        b=a*n;
        printf("%d \n",b);
    a++;
    }
    return 0;
}
