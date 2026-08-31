#include <stdio.h>

int main(void)
{
    int number, first = 0, second = 1;

    printf("Enter a number : ");
    scanf("%d", &number);

    if (number == 0) {
        printf("0 --> Fibonacci number\n");
        return 0;
    }

    while (1) {
        int fibonacci_number = first + second;

        if (fibonacci_number == number) {
            printf("%d + %d = %d --> Fibonacci number\n",
                   first, second, fibonacci_number);
            break;
        }

        if (fibonacci_number > number) {
            printf("%d is not a Fibonacci number\n", number);
            break;
        }

        first = second;
        second = fibonacci_number;
    }

    return 0;
}

