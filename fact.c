#include <stdio.h>
int main()
{
    int i,num;
    int fact=1;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("factorial of %d is:%d\n",num,fact);
    return 0;
}    

