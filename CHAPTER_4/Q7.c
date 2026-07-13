#include<stdio.h>

int main(){
    int n=5,f=1;
    while(n>0){
       f = f*n;
       n--; 
    }    
    printf("Factorial = %d\n",f);
    return 0;
}