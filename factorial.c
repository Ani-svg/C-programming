#include<stdio.h>
int main()
{
    int a,i=1,f=1;
    printf("Enter value:");
    scanf("%d",&a);
    while(i<=a)
    {f=f*i;
    i++;
}
printf("The factorial of the %d is:%d",a,f);
return 0;
}