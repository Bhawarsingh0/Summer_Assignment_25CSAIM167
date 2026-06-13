#include <stdio.h>

int main() {
    int start, end, num, temp, rem, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong Numbers are:\n");

    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}