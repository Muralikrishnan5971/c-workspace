#include <stdio.h>

using namespace std;

void printOut(int n){

    if (n >= 10)
        printOut(n/10);

    printOut(n%10);
}

int main(){

    printOut(10);


    return 0;
}

