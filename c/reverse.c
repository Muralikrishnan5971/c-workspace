#include <stdio.h>

void reverse(int arr[], int length);

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int length = 9;

    reverse(arr, length);

    for (int i = 0; i < length; i++) printf("%d ", arr[i]);

    return 0;
}

void reverse(int arr[], int length)
{
    int temp;

    for (int i = 0; i < (length / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;

    }
}
