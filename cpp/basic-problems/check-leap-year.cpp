#include <iostream>

using namespace std;

bool isLeapYear(int year){

    if (year % 400 == 0) { return true;}
    else if (year % 100 == 0) { return false;}
    else if (year % 4 == 0) { return true;}
    else return false;

}

int main() {

    int year = 2025;

    isLeapYear(year) ? cout << year << " is a LEAP YEAR" << endl : cout << year << " is NOT a LEAP YEAR" << endl;

    return 0;
}
