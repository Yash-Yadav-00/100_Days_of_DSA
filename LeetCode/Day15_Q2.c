void setZeroes(int **matrix, int matrixSize, int *matrixColSize)
{

    int rows = matrixSize;
    int cols = matrixColSize[0];

    int firstRowZero = 0;
    int firstColZero = 0;

    // Step 1: Check first row
    for (int j = 0; j < cols; j++)
    {
        if (matrix[0][j] == 0)
        {
            firstRowZero = 1;
            break;
        }
    }

    // Step 2: Check first column
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
        {
            firstColZero = 1;
            break;
        }
    }

    // Step 3: Mark rows and columns
    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Step 4: Zero rows
    for (int i = 1; i < rows; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 1; j < cols; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 5: Zero columns
    for (int j = 1; j < cols; j++)
    {
        if (matrix[0][j] == 0)
        {
            for (int i = 1; i < rows; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 6: Handle first row
    if (firstRowZero)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[0][j] = 0;
        }
    }

    // Step 7: Handle first column
    if (firstColZero)
    {
        for (int i = 0; i < rows; i++)
        {
            matrix[i][0] = 0;
        }
    }
}
