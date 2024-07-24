#include <iostream>

using namespace std;

int doubleFirstHalf(int arr[7])
{
    int m = 7;
    for (int i = 0; i < m / 2; i++)
    {
        cout << arr[i] * 2 << endl;
    }

return 0;

}
int fiveTimesLastHalf(int arr[7])
{
    int m = 7;
    for (int i = m / 2; i < m; i++)
    {
        cout << arr[i] * 5 << endl;
    }

return 0;

}
int main() {

    int arr[7] = {2, 1, 8, 4, 9, 3, 7};

    //doubleFirstHalf(arr);
    fiveTimesLastHalf(arr);



}
