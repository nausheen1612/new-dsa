#include <stdio.h>
#include <limits.h>  // For INT_MAX and INT_MIN

int reverse(int x) {
    long long rev = 0;  // use long long to detect overflow

    while (x != 0) {
        int digit = x % 10;      // extract last digit
        rev = rev * 10 + digit;  // build reversed number

        // check overflow
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }

        x /= 10;  // remove last digit
    }

    return (int)rev;
}

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    int result = reverse(x);
    printf("Reversed: %d\n", result);

    return 0;
}
