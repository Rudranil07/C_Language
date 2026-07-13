#include<stdio.h>

int main(){
    int i;
    printf("Table of 10 in reverse\n");
    for(i=10;i>0;i--){
        printf("10 * %d = %d\n",i,10*i);
    }
    return 0;
}