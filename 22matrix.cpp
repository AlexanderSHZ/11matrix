#include "Header.h"

int main()
{
    
}




struct Array createArray(struct Array ArrayElements)
{
    ArrayElements.arrayLength = ArrayElements.rows * ArrayElements.column * ArrayElements.depth;

    ArrayElements.arrayPtr = (int*)malloc(sizeof(int) * ArrayElements.arrayLength);
    if (ArrayElements.arrayPtr == NULL)
    {

    }
    return ArrayElements;
}

struct Array fillArray(struct Array ArrayElements)
{
    fflush(stdout);
       
    for (int i = 0; i < ArrayElements.arrayLength; i++)
    {
        cin >> ArrayElements.arrayPtr[i];
    }
}

int print(struct Array ArrayElements)
{
    for (int i = 0; i < ArrayElements.arrayLength; i++)
    {
        cout << setw(6) << ArrayElements.arrayPtr[i];
        if (i % (ArrayElements.rows - 1) == 0)
        {
            printf("\n");
        }
        
        printf("\n");
    }
    return 0;
}

int freeMemory(struct Array ArrayElements)
{
   
    free(ArrayElements.arrayPtr);

    return 0;
}