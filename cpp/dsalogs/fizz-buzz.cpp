#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    int happyNumbersArray[] = {11, 22, 36, 4, 8};
    unordered_set<int> happyNums(happyNumbersArray, happyNumbersArray + sizeof(happyNumbersArray) / sizeof(int));

    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            cout << "FizzBuzz" << endl;
        } else if ( i % 5 == 0) {
            cout << "Fizz" << endl;
        } else if ( i % 7 == 0) {
            cout << "Buzz" << endl;
        } else if (happyNums.find(i) != happyNums.end()) {
            cout << "HAPPY" << endl;
        } else {
            cout << i << endl;
        }

    }
        return 0;
}





