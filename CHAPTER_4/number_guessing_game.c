#include<stdio.h>
#include<stdlib.h>


int main(){
    int n = rand()%11+0;
    while(1){
        int i;
        scanf("%d",&i);
        if(i>n){
            printf("Your guess is greater than the number\n");
        }
        else if(i<n){
            printf("Your guess is less than the number\n");
        }
        else{
            printf("You guessed the number right\n");
            break;
        }
    }
    return 0;
}