#include<stdio.h>

// Задача 1. Наибольшее из пяти чисел
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4, num5;
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    int max = num1 > num2 ? num1: num2;
    max = max > num3 ? max : num3;
    max = max > num4 ? max : num4;
    max = max > num5 ? max : num5;
    printf("greatest number : %d\n", max);

    return 0;
}
