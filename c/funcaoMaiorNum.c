#include <stdio.h>

// criação de função que identifica o maior número

float maior(float num1, float num2)
{
    if(num1 > num2)
        return num1;
    else 
        return num2;
}

// utilização na fun main

int main()
{
    float x, y, m;
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("\nInsira outro valor:\n");
    scanf("%f", &y);
    m = maior(x,y);
    printf("\nMaior %.2f\n", m);
}