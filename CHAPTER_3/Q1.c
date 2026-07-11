#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter marks of subject 1: ");
    scanf("%d", &a);
    printf("Enter marks of subject 2: ");
    scanf("%d", &b);
    printf("Enter marks of subject 3: ");
    scanf("%d", &c);

    int t_m = a + b + c;
    if (t_m>0.4*300 && a,b,c>0.33*100){
        printf("You are promoted");
    }
    else{
        printf("You are not promoted");
    }
    return 0;
}