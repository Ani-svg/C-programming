#include<stdio.h>
int main()
{
    int a,i,isprime=1;
    printf("Enter a value:");
    scanf("%d",&a);
    if (a<0){
    printf("Enetr a valid positive integer");}
    else 
        if(a==2)
        {printf("prime");}

        else
        for(i=3;i<a;i++){
             if(a%i==0){
                isprime=0;
                break;
             }
        
        
        }
        if(isprime){printf("prime");}
        else{printf("Not a prime number");}
        return 0;
        
    }


    
