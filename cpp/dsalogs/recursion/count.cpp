#include <iostream>

using namespace std;

int counter = 0;

void print() {
    if (counter == 3) return;
    cout << counter << endl;
    counter++;
    print();
}

int main() {
    print();

    return 0;
}


