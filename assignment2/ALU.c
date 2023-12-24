#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int bitwiseAND(int a, int b)
{
    return a & b;
}

int bitwiseOR(int a, int b)
{
    return a | b;
}

int bitwiseNOT(int a)
{
    return ~a;
}

int main()
{
    int a, b, result = 0;
    char operation;

    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);

    printf("Enter the operation: ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        result = add(a, b);
        break;
    case '-':
        result = subtract(a, b);
        break;
    case '*':
        result = multiply(a, b);
        break;
    case '/':
        result = divide(a, b);
        break;
    case '&':
        result = bitwiseAND(a, b);
        break;
    case '|':
        result = bitwiseOR(a, b);
        break;
    case '^':
        result = bitwiseNOT(a, b);
        break;
    default:
        printf("Invalid operation\n");
        return 1;
    }

    printf("Result: %d\n", result);

    return 0;
}