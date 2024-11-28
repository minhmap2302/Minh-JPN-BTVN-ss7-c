#include <stdio.h>

int main() {
    int arr[5] = {3, 12, 0, 11, 8};
    int i;
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];

        }if (arr[i] < min) {
                min = arr[i];
            }
        }
        printf("Phan  tu lon nhat trong mang là: %d\n", max);
        printf("Phan tu nho nhat trong mang là: %d\n", min);
        return 0;
    }
