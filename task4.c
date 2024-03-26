// Задача 4. Какое время года. Ввести номер месяца и вывести название времени года.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter month number: \n");
    scanf("%d", &num);

    if(num == 12 || num == 1  || num == 2)
    {
        printf("winter\n");
    }
    else if (num == 3 || num == 4 || num == 5)
    {
        printf("spring\n");
    }
    else if (num == 6 || num == 7 || num == 8)
    {
        printf("summer\n");
    }
    else if (num == 9 || num == 10 || num == 11)
    {
        printf("autumn\n");
    }
    else
    {
        printf("invalid input\n");
    }
    
    
    
    return 0;
}
