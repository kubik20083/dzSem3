// Задача 2. Наименьшее из пяти чисел

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4, num5;
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    int min = num1 < num2 ? num1: num2;
    min = min < num3 ? min : num3;
    min = min < num4 ? min : num4;
    min = min < num5 ? min : num5;
    printf("smallest number : %d\n", min);

    return 0;
}