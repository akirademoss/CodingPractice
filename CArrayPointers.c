/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int Coeff[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};

void myFilter(int *Val, int N)
{int i;
   for (i=0; i<N; i++) {
       Val[i] = Val[i] + Coeff[i]; 
   }
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    int num = 10;
    
    myFilter(ptr, num);

      for (int i=0; i<num; i++) {
       printf("%d ", arr[i]);
   }
    printf("Hello World");
    return 0;
}
