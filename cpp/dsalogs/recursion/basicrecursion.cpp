#include <iostream>

using namespace std;

void printName(int n, string name) {
    // using recursion we are moving from
    // N to 0
    if (n == 0 ) return;
    cout << name << endl;
    n--;
    printName(n, name);
}

void printNameRec(int i, int n) {
   // in this example we are moving from
   // 1 to N
    if ( i > n ) return;
    cout << "Murali" << endl;
    printNameRec(i+1, n);
}

void printNameUsingLoop(int n) {
    for (int i = 0; i < n; i++) cout << "Murali" << endl;
}

void printNumUsingBacktracking(int i, int n) {
    if ( i > n ) return;
    printNumUsingBacktracking(i + 1, n);
    cout << i << endl;
}



int main() {

    // printName(5, "Murali");
    // printNameRec(1, 5);
    // printNameUsingLoop(5);
    printNumUsingBacktracking(1, 5);

    return 0;
}
