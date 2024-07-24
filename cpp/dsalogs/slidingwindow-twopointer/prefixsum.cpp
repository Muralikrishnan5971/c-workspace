#include <iostream>

using namespace std;

/*
 * Prefix Sum Techinque
 * --------------------
 *
 * arr = [2, 6, 3, 9, 1, 4]
 * let p prefix sum array, then
 * p[0] = arr[0] = 2,
 * p[1] = arr[0] + arr[1] = 8,
 * p[2] = arr[0] + arr[1] + arr[2] = 11,
 * p[3] = arr[0] + arr[1] + arr[2] + arr[3] = 20,
 * p[4] = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] = 21,
 * p[5] = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] = 25,
 *
 * p = [2, 8, 11, 20, 21, 25]
 *
 *
 *
 */

int main() {

    int arr[6] = {2, 6, 3, 9, 1, 4};
    int size = sizeof(arr) / sizeof(arr)[0];
    int p[6];

    p[0] = arr[0];

    for (int i = 1; i < size; i++) {
        p[i] = p[i - 1] + arr[i];
    }

    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    return 0;
}
