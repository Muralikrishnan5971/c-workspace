#include <stdio.h>

int to_find(int arr[], int length, int num);

int main()
{
    int arr[] = {1, 5, 81, 6, 2, 1, 7, 1, 81};

    int find_num = 81;
    int count = to_find(arr, 9, find_num);
    printf("%d has occured %d times!!", find_num, count);

    return 0;

}

int to_find(int arr[], int length, int num)
{
    int count = 0;
    for (int i = 0; i < length; i++) if (arr[i] == num) ++count;

    return count;
}

