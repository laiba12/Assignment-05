//Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int a=1,n,b;
    printf("Enter the number= ");
    scanf("%d",&n);
    printf("The cube is: \n");
    while(a<=n)
    {
        b=a*a*a;
        printf("%d \n",b);
    a++;
    }
    return 0;
}
