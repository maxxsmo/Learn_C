/*
* Program that implement a bubble sort algorithm that sorts a list of number.
* Maxime Smolis 11/05/18
* bubble sort should not be used to sort large data if performance matters. 
*/

#include <stdio.h>


int main(void)
{
    int n, pass, i, temp, k;
    n = 12;
    int array[] =
    {
        18, 20, 2, 50, 15, 2, 13, 23, 1, 5, 9, 34
    };

    printf("Items unsorted : \n");

    // Loop that print the data in array before sorting
    for (k=0;k<n;k++)
    {
        printf(" - %d", array[k]);
    }

    printf("\n");

    // loop for number of passes thourgh array
    for (pass=0; pass < n-1; pass++)
    {
        
        for (i=0;i<n-1;i++)
        {
            // compare elements for swapping
            if (array[i]>array[i+1])
            {
                // variable temp is used to hold data temporarily for swapping. 
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
    printf("Items sorted: \n");
    for (i=0;i<n;i++)
    {
        printf(" - %d", array[i]);
    }
    printf("\n");
}
