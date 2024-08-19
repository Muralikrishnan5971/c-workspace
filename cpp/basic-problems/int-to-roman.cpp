#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

string intToString(int num){

    string romanNumber;
    map<int, string> romNum;
    romNum.insert(pair<int, string>(1, "I"));
    romNum.insert(pair<int, string>(5, "V"));
    romNum.insert(pair<int, string>(10, "X"));
    romNum.insert(pair<int, string>(50, "L"));
    romNum.insert(pair<int, string>(100, "C"));
    romNum.insert(pair<int, string>(500, "D"));
    romNum.insert(pair<int, string>(1000, "M"));

    for (const auto& pair : romNum){
        cout << "Key: " << setw(4) << pair.first << " Value: " << pair.second << endl;
    }





    return romanNumber;

}

int main() {

   cout <<  intToString(58) << endl;




    return 0;

}
