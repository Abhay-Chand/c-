#include <stdio.h>

void insertElement(int arr[], int size, int index, int element) {
    if (index >= 0 && index <= size) {
        for (int i = size - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
}

int main() {
    int myArray[10] = {1, 2, 3, 4, 5};
    int size = 5;

    insertElement(myArray, size, 2, 10);

    // Print the updated array
    for (int i = 0; i <= size; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
}
