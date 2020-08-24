#include "Header.h"



int main()
{
    Array ArrayElements;
    
    printf("Enter number of rows \n");
    scanf("%d", &ArrayElements.rows);
    printf("Enter number of columns \n");
    scanf("%d", &ArrayElements.column);
    printf("Enter number of depth \n");
    scanf("%d", &ArrayElements.depth);
 
    ArrayElements = createArray(ArrayElements);      //Выделение места под массив массивов.

    printf("Enter numbers to the massive \n");

    fillArray(ArrayElements);                   //Заполнение массива.

   // print(ArrayElements);                       //Вывод массива на консоль.
   
    int i = 0;
    cin >> i;
    
    freeMemory(ArrayElements);
    cin >> i;
    return 0;
}
