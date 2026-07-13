#include<stdio.h>

int main(){
    int s=0,i=0;
    do{
        s=s+i;
        i++;
    }while(i<=10);
    printf("Sum = %d\n",s);
    return 0;
}