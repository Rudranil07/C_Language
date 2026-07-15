#include<stdio.h>

int rec_sum(int n){
    if  (n==0){
        return 0;
    }
    return n + rec_sum(n-1);
}
int main(){
    printf("%d", rec_sum(10));
    return 0;
}