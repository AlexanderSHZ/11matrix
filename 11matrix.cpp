#include <iostream>
#pragma warning(disable : 4996)

int** incomingData(int r, int c);


int main()
{
    int rows, column;
    
    printf("Enter number of strings \n");
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
    for (int i = 0; i < rows; i++)
    {
        delete[] mass[i];
    }
    delete[] mass;
}

int** incomingData(int r, int c)
{
   // int matrix[] = (int*)malloc(sizeof(int) * r * c);
    
    int** mat = new int*[r];
    for (int i = 0; i < r; i++)
    {
        mat[i] = new int[c];
    }

    printf("Enter numbers to the massive \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat[i][j] = getchar();
        }
    }

    return mat;
}