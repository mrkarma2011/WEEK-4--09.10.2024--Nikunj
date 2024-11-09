#include <stdio.h>

#define SIZE 5

void printSpiral(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}

void generateSpiral(int arr[SIZE][SIZE]) {
    int num = 1;
    int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // right, down, left, up
    int dirIndex = 0;
    int x = 0, y = 0;

    for (int i = 0; i < SIZE * SIZE; i++) {
        arr[x][y] = num;
        num++;

        int newX = x + dir[dirIndex][0];
        int newY = y + dir[dirIndex][1];

        if (newX < 0 || newX >= SIZE || newY < 0 || newY >= SIZE || arr[newX][newY] != 0) {
            dirIndex = (dirIndex + 1) % 4;
            newX = x + dir[dirIndex][0];
            newY = y + dir[dirIndex][1];
        }

        x = newX;
        y = newY;
    }
}

int main() {
    int arr[SIZE][SIZE] = {{0}};

    generateSpiral(arr);
    printSpiral(arr);

    return 0;
}
