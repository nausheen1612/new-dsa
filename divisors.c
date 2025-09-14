#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Divisors of %d are: ", n);

    // First print all smaller divisors
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    // Print larger divisors in reverse order
    for (int i = (int)sqrt(n); i >= 1; i--) {
        if (n % i == 0 && i != n / i) {
            printf("%d ", n / i);
        }
    }

    printf("\n");
    return 0;
}
