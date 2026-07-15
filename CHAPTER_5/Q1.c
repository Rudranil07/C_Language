#include<stdio.h>

float avg(float a, float b, float c){
    return (a + b + c) / 3;
}
int main(){
    printf("Average: %f\n", avg(10.0, 20.0, 30.0));
    return 0;
}