#include <stdio.h>

int main() {
    int numbers[5] = {15, 9, 30, 25, 18};
    int max = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("最大值是: %d\n", max);
    return 0;
}
