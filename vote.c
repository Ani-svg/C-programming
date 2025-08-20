#include <stdio.h>

int main(){
    int vote;
    int x=0,y=0,z=0;

    printf("Enter 1 to vote for x\nEnter 2 to vote for y\nEnter 3 to vote for z\nYour Vote: ");
    scanf("%d",&vote);

    switch(vote){
    case 1:
        x += 1;
        break;
    case 2:
        y += 1;
        break;
    case 3:
        z += 1;
        break;
    }

    if ((x>=y)&&(y>=z)){
        printf("X is the winner");
    } else if ((y>=x)&&(y>=z)){
        printf("Y is the winner");
    } else {
        printf("Z is the winner");
    }
}