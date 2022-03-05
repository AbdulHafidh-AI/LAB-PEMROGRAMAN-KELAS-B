#include <stdio.h>
#define ROW 2
#define COL 3
int main()
{
    int i, j;
    float hasil[ROW][COL];
    float matrixA[ROW][COL] = {
        {2.4, 3.5, 5.6}, 
        {3.7, 1.0, 2.4}
    };
    float matrixB[ROW][COL] = {
    {3.2, 4.5, 7.4},
    {3.2, 1.5, 3.7}
    };
    // Store data ke dalam array
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            hasil[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    // Menampilkan hasil penjumlahan matriks
    for (i = 0; i < ROW; i++)
    {
        printf("[");
        for (j = 0; j < COL; j++)
        {
            printf("%.1f ", hasil[i][j]);
        }
        printf("]\n");
    }
    return 0;
}
