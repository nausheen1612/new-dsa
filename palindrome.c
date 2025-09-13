#include <stdio.h>
#include <stdbool.h>   // for bool, true, false
#include <limits.h>    // for INT_MAX, INT_MIN

bool isPalindrome(int x) {
    // negative numbers are not palindrome
    if (x < 0) return false;

    long long rev = 0, original = x;

    // reverse the number
    while (x != 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;

        // check for overflow
        if (rev > INT_MAX) return false;

        x /= 10;
    }

    return (rev == original);
}

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if (isPalindrome(x))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
