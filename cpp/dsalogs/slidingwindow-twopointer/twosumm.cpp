#include <iostream>

using namespace std;


int main()
{
    int arr[] = {2, 5, 1, 7, 3, 4, 10, -2};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    cout << "Lenght of the array is: " << lenght << endl;
    //for (int i = 0; i < lenght; i++) cout << arr[i] << "\n";

    int t = 8;

    for (int i = 0; i < lenght; i++)
    {
        for (int j = i + 1; j < lenght; j++)
        {
            if (arr[i] + arr[j] == t)
                cout << arr[i] << " and " << arr[j] << "found\n";
        }
    }


    return 0;
}
