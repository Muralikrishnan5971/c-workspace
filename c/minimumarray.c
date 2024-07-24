#include <stdio.h>

int find_min(int arr[], int length);

int main()
{
    int arr[] = { 2, 4, 9, 3, 5, 10, 1};

    int min = find_min(arr, 7);

    printf("The minimum value is: %d\n", min);

    return 0;
}

int find_min(int arr[], int length)
{
    int minvalue = arr[0];

    for(int i = 0; i < length; i++)
        if (arr[i] < minvalue) minvalue = arr[i];

    return minvalue;
}
