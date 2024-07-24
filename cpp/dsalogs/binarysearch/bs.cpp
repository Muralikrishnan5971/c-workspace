#include <iostream>

using namespace std;

int binarySearchIterative(int arr[], int size, int t)
{
    int l = 0;
    int h = size - 1;

    while(l <= h)
    {
        int m = (l + h) / 2;
        if(t == arr[m]) return m;
        else if( t < arr[m]) h = m - 1;
        else l = m + 1;
    }
    return -1;
}

int main()
{
    int n = 8;
    int arr[] = {3, 4, 6, 7, 9, 12, 16};

    int t;
    cout << "Please enter a num to find: " << endl;
    cin >> t;

    int ans = binarySearchIterative(arr, n, t);
    if (ans == -1) cout << t << " is not present in the array!!" << endl;
    else cout << "The index of " << t << " is: " << ans << endl;;

    return 0;

}
