#include<stdio.h>

int main(){
    int f=1;
    for(int n=5;n>0;n--){
        f=f*n;
        n--;
    }
    printf("Factorial = %d\n",f);
    return 0;
}