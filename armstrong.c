#include <stdio.h>

int main() {
    int n, original, remainder, result = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    original = n;

    while (original != 0) {
        remainder = original % 10;           // extract last digit
        result += remainder * remainder * remainder;  // cube and add
        original /= 10;                      // remove last digit
    }

    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
