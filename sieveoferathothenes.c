#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int n) {
    bool prime[n + 1];   // Array to mark prime status
    for (int i = 0; i <= n; i++) {
        prime[i] = true; // Assume all numbers are prime initially
    }

    prime[0] = prime[1] = false; // 0 and 1 are not prime

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            // Mark multiples of p as not prime
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    // Print all prime numbers
    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sieveOfEratosthenes(n);

    return 0;
}
