#include <stdio.h>

int main()
{
    int arr[] = {4, 1, 3, 9, 0, 10, 32, 7};
    int sum = 0;

    for (int i = 0; i < 8; i++) sum += arr[i];
    printf("The sum of all the values in the array is %d", sum);

    return 0;
}
