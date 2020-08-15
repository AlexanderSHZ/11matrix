#include <iostream>
#pragma warning(disable : 4996)

int** incomingData(int r, int c);
int* matRow(int r);
int print(int r, int c, int** mass);

int main()
{
    int rows, column;
    
    printf("Enter number of rows \n");
    scanf("%d", &rows);
    printf("Enter number of columns \n");
    scanf("%d", &column);
    printf("Enter numbers to the massive \n");
    int** mass = incomingData(rows, column);

    print(rows, column, mass);
   
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
        mat[i] = (int*)malloc(sizeof(int) * c);
        if (mat[i] == NULL)
        {
            printf("Program operation failed! \n");
        }
        mat[i] = matrix[i];
        
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

//int* matRow(int r)
//{
 //   int* mat = (int*)malloc(sizeof(int) * r);
//    if (mat == NULL)
//       {
//            printf("Program operation failed! \n");
//       }
//
//    return mat;
//}

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