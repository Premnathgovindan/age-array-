#include <stdio.h>
    void main()
    {
 
        int arr[] = {24,43,21,20,10,7,30,18}, a[10], b[10];
        int i, j = 0, k = 0, n=sizeof(arr)/sizeof(arr[0]);

        for (i = 0; i < n; i++)
        {
            if (arr[i] <=20)
            {
                b[j] = arr[i];
                j++;
            }
            else if(arr[i]>20)
            {
                a[k] = arr[i];
                k++;
            }
        }
 
        printf("\nBelow 20 : \n");
        for (i = 0; i < k; i++)
        {
            printf("%d ", b[i]);
        }
 
        printf("\nAbove 20: \n");
        for (i = 0; i < j; i++)
        {
            printf("%d ", a[i]);
        }
 printf("\nno of above 20 : %d \n", j);
 printf("\nno of below 20 : %d \n", k);
    }
