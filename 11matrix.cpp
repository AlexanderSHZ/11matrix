#include <iostream>

int incomingData()


int main()
{
    printf("%d" incomingData());
}

int incomingData()
{
    int string, column,

        printf("Enter number of strings \n");
    string = getchar();
    printf("Enter number of columns \n");
    column = getchar();

    int matrix[string][column] = (int*)malloc(sizeof(int) * string * column);

    printf("Enter numbers to the massive \n");
    for (int i = 0; i < string; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix[i][j] = getchar();
        }
    }

    return matrix[string][column];
}