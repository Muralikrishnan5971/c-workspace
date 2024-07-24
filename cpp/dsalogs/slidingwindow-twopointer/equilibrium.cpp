#include <iostream>

using namespace std;
/* Given an array of n integers, find if any index exists such that the sum of
 * elements to its right is equal to the sum of elements to its left. If yes
 * print the index, otherwise print “No Equilibrium”.
 *
 *
 *
 */
int main() {

    int arr[] = {7,2,1,5,4};

    for (int i = 0; i < 5; i++) {

        int leftSum=0, rightSum=0;

        for (int j = 0; j < i; j++) {

            leftSum += arr[j];
        }
        for (int j = 0; j < i; j++) {

            leftSum += arr[j];
        }






    return 0;

}
