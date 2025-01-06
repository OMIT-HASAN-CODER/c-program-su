/**
Array: An array is a collection of data of the same type.
Type:
  1. one-dimensional (1D)
  2. multi-dimensional (2D, 3D, ...)
1D Array Syntax:
  arrayType arrayName[arraySize];
  Example: int a[5];
2D Array Syntax:
  arrayType arrayName[rowSize][colSize];
  Example: int a[2][3]
**/

#include <stdio.h>
int main()
{
    int a[5] = {2,3,5,7,9};
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);
    printf("%d\n",a[4]);
    return 0;
}
