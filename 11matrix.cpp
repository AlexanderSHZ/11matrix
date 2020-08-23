#include <iostream>

#include <iomanip>
using namespace std;

#pragma warning(disable : 4996)

int** createArray(int rows, int column, int** arrayPtr);    

int** fillArray(int rows, int column, int** arrayPtr);      

int print(int r, int c, int** arrayPtr);                    


int main()
{
    int rows, column;
    int** arrayPtr = NULL;
    
    printf("Enter number of rows \n");
    scanf("%d", &rows);
    printf("Enter number of columns \n");
    scanf("%d", &column);
 
    arrayPtr = createArray(rows, column, arrayPtr);      //Выделение места под массив массивов.

    printf("Enter numbers to the massive \n");

    fillArray(rows, column, arrayPtr);                   //Заполнение массива.

    print(rows, column, arrayPtr);                       //Вывод массива на консоль.
   
    free(arrayPtr);
   
    return 0;
}

int** createArray(int rows, int column, int** arrayPtr)
{  

    arrayPtr = (int**)malloc(sizeof(int*) * rows);
    if (arrayPtr == NULL)
    {

    }
   
    for (int i = 0; i < rows; i++)
    {
        arrayPtr[i] = (int*)malloc(sizeof(int) * column);
       
        if (arrayPtr[i] == NULL)
        {
           
        }
    }

     return arrayPtr;
}
int** fillArray(int rows, int column, int** arrayPtr)
{
    fflush(stdout);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
           cin >> arrayPtr[i][j];
        }
    }
    return arrayPtr;
}

int print(int rows, int column, int** arrayPtr)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "row["<< setw(3) << i << "]" ;

        for (int j = 0; j < column; j++)
        {      
            cout << setw(6) << arrayPtr[i][j];
        }
        printf("\n");
    }
    return 0;
}