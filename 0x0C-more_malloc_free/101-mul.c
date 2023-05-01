#include <stdio.h>
#include <stdlib.h>

int is_digit_string(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

int str_length(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void print_number(int *num, int size)
{
    int i = size - 1;
    while (i >= 0 && num[i] == 0)
        i--;
    if (i < 0)
        printf("0");
    while (i >= 0)
    {
        printf("%d", num[i]);
        i--;
    }
}

void multiply(char *num1_str, char *num2_str)
{
    if (!is_digit_string(num1_str) || !is_digit_string(num2_str))
    {
        printf("Error\n");
        exit(98);
    }

    int num1_length = str_length(num1_str);
    int num2_length = str_length(num2_str);
    int result_length = num1_length + num2_length;
    int *result = calloc(result_length, sizeof(int));

    if (!result)
    {
        printf("Error\n");
        exit(98);
    }

    for (int i = 0; i < num1_length; i++)
    {
        int carry = 0;
        int num1_digit = num1_str[num1_length - 1 - i] - '0';

        for (int j = 0; j < num2_length; j++)
        {
            int num2_digit = num2_str[num2_length - 1 - j] - '0';
            int product = num1_digit * num2_digit + result[i+j] + carry;
            result[i+j] = product % 10;
            carry = product / 10;
        }

        if (carry > 0)
            result[i + num2_length] += carry;
    }

    printf("%s x %s = ", num1_str, num2_str);
    print_number(result, result_length);
    printf("\n");
    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];
    multiply(num1_str, num2_str);

    return 0;
}
