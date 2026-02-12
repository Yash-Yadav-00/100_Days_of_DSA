bool isToeplitzMatrix(int **matrix, int matrixSize, int *matrixColSize)
{
    int cols = matrixColSize[0]; // Store number of columns
    // Start from row 1 and column 1
    // because first row and first column have no top-left neighbour
    for (int i = 1; i < matrixSize; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] != matrix[i - 1][j - 1])
            {
                return false;
            }
        }
    }
    return true;
}