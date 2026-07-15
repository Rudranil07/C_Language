#include<stdio.h>

float gravity(float m){
    return m * 9.8;


}
int main(){
    float m;
    printf("Enter mass in kg: ");
    scanf("%f", &m);
    printf("Weight: %f N\n", gravity(m));
    return 0;
}