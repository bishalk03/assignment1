#include <stdio.h>
#include <stdlib.h>
int main()
{

    int row, col;
    printf("enter row\n");
    scanf("%d", &row);
    printf("enter column\n");
    scanf("%d", &col);
    int matrix[row][col];
    for (int a = 0; a < row; a++)
    {
        for (int b = 0; b < col; b++)
        {
            printf("enter elements\n");
            scanf("%d", &matrix[a][b]);
        }
    }
    printf("2D array: \n");
    for (int l = 0; l < row; l++)
    {
        for (int m = 0; m < col; m++)
        {
            printf("%d ", matrix[l][m]);
        }
        printf("\n");
    }
    int size = row * col;
    int *arr = (int *)malloc(size * sizeof(int));
    int k = 0;
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr[k] = matrix[i][j];
            k++;
        }
    }
    printf("required 1-D array\n");
    for (int x = 0; x < size; x++)
    {
        printf("%d ", arr[x]);
    }
}
