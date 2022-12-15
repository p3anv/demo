#include <stdio.h>

int main(void) {
    int arr[100];
    int temp, size ,first, last, middle ,search,found,result;

    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter the array elements: ");

    for(int i = 0 ; i <size ;++i )
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter search value: ");
    scanf("%d", &search);

    for(int i = 0 ; i<size ; ++i)
        for(int j= 0; j<size-1; j++)
        {
            if(arr[j+1]>arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    printf("Elements of the array sorted in descending order: ");
    for(int i = 0;i <size ;++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Number of passes is: %d", size -1);

    first = 0;
    last = size- 1;
    found = 0;

    while (!found &&first <= last) {
        middle = (first+last)/2;

        if ( search == arr[middle] )
        {
            found = 1 ;
            result = middle;
            break;
        }
        else if(search < arr[middle])
        {
            last = middle - 1;
        }

        else
            first = middle +1;
    }

    if (found)
    {
        printf("\n");
        printf("%d found at location %d.\n", search, result);
    }
    else
    {
        printf("\n");
        printf("%d is not found", search);
    }

    return 0;
}
