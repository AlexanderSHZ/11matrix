#include <iostream>
#pragma warning(disable : 4996)

int** incomingData(int r, int c);
//int* matRow(int r);
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
//    int* matRowPtr = NULL;

    fflush(stdout);

    typedef int* matrixPtr;
    matrixPtr* matrix = new matrixPtr[r];
    for (int i = 0; i < r; i++)
    {
        matrix[i] = new int[c];
    }

    

 //   int** matTmp = (int**)malloc(sizeof(int) * r);
 //   if (matTmp == NULL)
 //   {
 //      printf("Program operation failed! \n");
 //   }
 //   matTmp = matrixPtr;
 //   for (int i = 0; i < c; i++)
 //   {
 //       int* matRowTmp = (int*)malloc(sizeof(int) * c);
 //       if (matRowTmp == NULL)
 //       {
 //           printf("Program operation failed! \n");
 //       }
 //       matRowTmp = matRow;
//        matrix[i] = matRow;
        
  //  }
   
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