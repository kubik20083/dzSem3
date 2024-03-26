// Задача 3. В порядке возрастания. Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    printf("Enter three integers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 < num2 && num2 < num3)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}
