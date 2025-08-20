#include<stdio.h>
int main()
{
    int a,b,c,e;
    printf("enter coeff a: ");
    scanf("%d", &a);

    printf("enter coeff b: ");
    scanf("%d", &b);
    
    printf("enter coeff c: ");
    scanf("%d", &c);


    e= b*b - 4*a*c;
    if(e>0){
        printf("%d Roots are real and distinct",e);
    }else if(e==0){
     printf("%d Roots are real and equal",e);
}
    else
    {printf("%d Roots are imaginary",e);}
    return 0 ;

}