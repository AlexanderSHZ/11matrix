﻿#include <iostream>
#pragma warning(disable : 4996)

int** incomingData(int r, int c);
int* matRow(int r);

int main()
{
    int rows, column;
    
    printf("Enter number of rows \n");
    scanf("%d", &rows);
    printf("Enter number of columns \n");
    scanf("%d", &column);



    int** mass = incomingData(rows, column);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d", mass[i][j]);
        }
    }
   
    free(mass);
    return 0;
}

int** incomingData(int r, int c)
{
   
    int** matrix = (int**)malloc(sizeof(int) * r *c);
    if (matrix == NULL)
    {
       printf("Program operation failed! \n");
    }
   
    printf("Enter numbers to the massive \n");

    for (int i = 0; i < r; i++)
     {
        **matrix &= matRow(r);

        for (int j = 0; j < c; j++)
        {
           scanf("%d", &matrix[i][j]);
          
        }
        
          
        
     }

     return matrix;
}

int* matRow(int r)
{
    int* mat = (int*)malloc(sizeof(int) * r);
    if (mat == NULL)
       {
            printf("Program operation failed! \n");
       }

    return mat;
}