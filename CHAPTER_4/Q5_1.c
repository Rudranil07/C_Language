#include<stdio.h>

int main(){
    int i,s=0;
    for(i=0;i<=10;i++){
        s=i+s;
    }
    printf("Sum = %d\n",s);
    return 0;
}