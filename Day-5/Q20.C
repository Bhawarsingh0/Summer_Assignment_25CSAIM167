#include <stdio.h>

int main() {
    int num, largestFactor = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num % 2 == 0) {
        largestFactor = 2;
        num = num / 2;
    }

    for (i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            largestFactor = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %d", largestFactor);

    return 0;
}