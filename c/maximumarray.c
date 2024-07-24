#include <stdio.h>

int find_max(int arr[], int length);

int main()
{
    int arr[] = { 2, 40, 9, 3, 5, 10, 1};

    int max = find_max(arr, 7);

    printf("The maximun value is: %d\n", max);

    return 0;
}

int find_max(int arr[], int length)
{
    int maxvalue = arr[0];

    for(int i = 1; i < length; i++) if (arr[i] > maxvalue) maxvalue = arr[i];

    return maxvalue;
}
