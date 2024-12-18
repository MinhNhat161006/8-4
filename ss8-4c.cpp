#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 5, 3}, {7, 2, 6}, {4, 8, 9}};
    int max = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Phần tử lớn nhất trong mảng là: %d\n", max);

    return 0;
}
