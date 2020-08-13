#include <iostream>
#pragma warning(disable : 4996)

int incomingData(int s, int c);


int main()
{
    int string, column;
    
    printf("Enter number of strings \n");
    scanf("%d", &string);
    printf("Enter number of columns \n");
    scanf("%d", &column);



    int mass[] = incomingData(string, column);

    for (int i = 0; i < string; i++)
    {
        for (int j = 0; j < string; j++)
        {
            printf("%d", mass[i][j]);
        }
    }
    
}

int incomingData(int s, int c)
{
    int matrix[] = (int*)malloc(sizeof(int) * s * c);

    printf("Enter numbers to the massive \n");
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrix[i][j] = getchar();
        }
    }

    return matrix[s][c];
}