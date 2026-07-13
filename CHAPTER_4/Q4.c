#include<stdio.h>

int main(){
    int n=10,s=0;
    while(n>0){
        s=n+s;
        n--;
    }
    printf("Sum = %d\n",s);
    return 0;
}