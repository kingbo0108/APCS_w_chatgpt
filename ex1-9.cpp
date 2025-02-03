#include <stdio.h>

// 計算陣列總和
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int total = sumArray(numbers, 5);
    printf("陣列總和: %d\n", total);
    return 0;
}
