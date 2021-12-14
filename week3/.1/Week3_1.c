#include <stdio.h>

void maxArrays(float *ptr1, float *ptr2, float *ptr3){

    int i;
    for (i=0; i<4; i++) { 
        if (ptr1[i] > ptr2[i])
            ptr3[i] = ptr1[i];
        
        else if (ptr1[i] = ptr2[i])
            ptr3[i] = ptr1[i];

        else if (ptr1[i] < ptr2[i])
            ptr3[i] = ptr2[i];

        printf("\n hoogste waardes: %f",ptr3[i]);	
        }
}


int main()
{   
    int i;
    int size = 4;
    float *ptr1;
    float *ptr2;
    float *ptr3;

    float arr1[4] = {0.7, 3.3, 0.5, 10.3};
    float arr2[4] = {4.1, 1.5, 0.5, 2.3};
    float arr3[4];
    ptr1 = arr1;
    ptr2 = arr2;
    ptr3 = arr3;

    
    

    printf("array 1: ");

        for(i = 0; i < size; i++)
    {

    printf("%f, \t ", arr1[i]); 
    }

    printf("\narray 2: ");

        for(i = 0; i < size; i++)
    {
    printf("%f, \t ", arr2[i]); 
    }

    
    maxArrays(ptr1, ptr2, ptr3);

    return 0;
}