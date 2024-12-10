#include <stdio.h>

void NhapMang(int arr[100][100], int cols, int row) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < row; j++) {
            printf("arr[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}
void InMang(int arr[100][100], int cols, int row) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
int main(void) {
    int cols,row;
    int arr[100][100];
    do {
        printf("Nhap hang: ");
        scanf("%d", &cols);
        printf("Nhap cot: ");
        scanf("%d", &row);
        if(cols < 1 || row < 1 || cols > 100 || row > 100) {
            printf("Khong hop le!!!\n");
        }
    }while(cols < 1 || row < 1 || cols > 100 || row > 100);
    NhapMang(arr ,cols, row);
    InMang(arr ,cols, row);
  return 0;
}
