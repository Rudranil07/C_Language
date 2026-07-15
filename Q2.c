#include <stdio.h>

float C_to_F(float c)
{
    return (c * 9 / 5) + 32;
}

int main()
{
    float c;
    printf("Enter temp in Celsius: ");
    scanf("%f", &c);
    printf("Temperature in Fahrenheit: %f\n", C_to_F(c));
    return 0;
}