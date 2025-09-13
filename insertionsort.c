#include <stdio.h>

// Function to perform insertion sort
void insertSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // element to insert
        int j = i - 1;

        // shift larger elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;   // place key in correct position
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
