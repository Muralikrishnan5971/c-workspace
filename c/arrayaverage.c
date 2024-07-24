#include <stdio.h>

double average_sum(int arr[], int lenght);

int main()
{
    int arr[] = {1, 3, 5, 6, 10, 32, 7, 21};
    double avg = average_sum(arr, 8);
    printf("The average sum of the array values is %.2lf\n", avg);

    return 0;

}

double average_sum(int arr[], int length)
{
    double sum = 0;
    for (int i = 0; i < length; i++) sum += arr[i];
    return (sum / length);
}
