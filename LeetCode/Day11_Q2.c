/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **transpose(int **matrix, int matrixSize, int *matrixColSize, int *returnSize, int **returnColumnSizes)
{

    int m = matrixSize;
    int n = matrixColSize[0];

    *returnSize = n;

    int **ans = malloc(n * sizeof(int *));
    *returnColumnSizes = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        (*returnColumnSizes)[i] = m;
        ans[i] = malloc(m * sizeof(int));
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            ans[j][i] = matrix[i][j];

    return ans;
}
