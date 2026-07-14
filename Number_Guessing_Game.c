#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int n = (rand()%101);
    int guess=0;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 0 and 100. Try to guess it!\n Let's begin!\n");
    while(1){
        int i;
        printf("Enter your guess: ");
        scanf("%d",&i);
        if(i>n){
            printf("Your guess is greater than the number\n");
            guess++;
        }
        else if(i<n){
            printf("Your guess is less than the number\n");
            guess++;
        }
        else{
            printf("Congratulations! You guessed the number right in %d attempts\n",guess);
            break;
        }
    }
    return 0;
}