#include <stdio.h>

int main(void)
{
    int inputNumber;
    long long total = 0;
    long long currentNumber;

    scanf("%d", &inputNumber);

    if (inputNumber < 0) {
        printf("NG");
        return 0;
    }

    for (currentNumber = 1; ; currentNumber++) {

        if (currentNumber > inputNumber) {
            break;
        }

        if (currentNumber % 3 == 0 ||
            currentNumber % 5 == 0) {
            continue;
        }

        total += currentNumber;
    }

    printf("%lld", total);

    return 0;
}
