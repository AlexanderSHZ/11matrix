#include <iostream>
#pragma warning(disable : 4996)

int** incomingData(int r, int c);
int* matRow(int с);
int print(int r, int c, int** mass);

struct MatrixSize
{
    int rows;
    int column;
};

int main()
{
    MatrixSize matrixSize;
   
    
    printf("Enter number of rows \n");
    scanf("%d", &matrixSize.rows);
    printf("Enter number of columns \n");
    scanf("%d", &matrixSize.column);
    printf("Enter numbers to the massive \n");

    int** mass = incomingData(matrixSize.rows, matrixSize.column);

    print(matrixSize.rows, matrixSize.column, mass);
   
    free(mass);
    return 0;
}

int** incomingData(int r, int c)
{
   
    int** matrix = NULL;
    int** mat = (int**)malloc(sizeof(int) * r);
    if (mat == NULL)
    {
       printf("Program operation failed! \n");
    }
    mat = matrix;
    for (int i = 0; i < c; i++)
    {
        matrix[i] = matRow(matrixSize.сolumn);
    }
   
    for (int i = 0; i < r; i++)
     {
        

        for (int j = 0; j < c; j++)
        {
            
            scanf("%d", &matrix[i][j]);
          
        }
        
          
        
     }

     return matrix;
}

int* matRow(int с)
{
    int* matrix = NULL;
    int* mat = (int*)malloc(sizeof(int) * с);
    if (mat == NULL)
       {
            printf("Program operation failed! \n");
       }
    mat = matrix;
    return matrix;
}

int print(int r, int c, int** mass)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", mass[i][j]);
        }
    }
    return 0;
}