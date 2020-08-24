
#include "Header.h"


struct Array createArray(struct Array ArrayElements)
{

    ArrayElements.arrayPtr = (int***)malloc(sizeof(int**) * ArrayElements.rows);
    if (ArrayElements.arrayPtr == NULL)
    {

    }
    for (int j = 0; j < ArrayElements.rows; j++)
    {
        ArrayElements.arrayPtr[j] = (int**)malloc(sizeof(int*) * ArrayElements.column);

        for (int i = 0; i < ArrayElements.column; i++)
        {
            ArrayElements.arrayPtr[j][i] = (int*)malloc(sizeof(int) * ArrayElements.depth);


        }
    }



    return ArrayElements;
}

struct Array fillArray(struct Array ArrayElements)
{
    fflush(stdout);

    for (int i = 0; i < ArrayElements.rows; i++)
    {
        for (int j = 0; j < ArrayElements.column; j++)
        {
            for (int k = 0; k < ArrayElements.depth; k++)
            {
                ArrayElements.arrayPtr[i][j][k] = i * j;
                //cin >> arrayPtr[i][j];
            }
        }
    }
    return ArrayElements;
}

int freeMemory(struct Array ArrayElements)
{
    for (int i = 0; i < ArrayElements.rows; i++)
    {
        for (int j = 0; j < ArrayElements.column; j++)
        {
            free(ArrayElements.arrayPtr[i][j]);
        }
        free(ArrayElements.arrayPtr[i]);

    }

    free(ArrayElements.arrayPtr);

    return 0;
}



int print(struct Array ArrayElements)
{
    for (int i = 0; i < ArrayElements.rows; i++)
    {
        cout << "row[" << setw(3) << i << "]";

        for (int j = 0; j < ArrayElements.column; j++)
        {
            cout << setw(6) << ArrayElements.arrayPtr[i][j];
        }
        printf("\n");
    }
    return 0;
}