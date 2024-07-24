#include <iostream>
#include <string>
using namespace std;

bool is_adult(int age)
{
    if (age <= 0)
    {
        cout << "Enter a valid age!";
        return false;
    }
    if (age >= 18) return true;
    else return false;
}

int maxim(int m, int n)
{
    if (m >= n) return m;
    else return n;
}

void doSomethingPassByValue(int num)
{
    cout << "PASS BY VALUE" << endl;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

void doSomethingPassByReference(int &num)
{
    cout << "PASS BY REFERENCE" << endl;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    string name = "Muralikrishnan";
    cout << "My name is : " << name << endl;
    cout << "**************************************************" << endl;

    cout << "Size of int : " << sizeof(int) << " bytes!" << endl;
    cout << "Size of long : " << sizeof(long) << " bytes!" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes!" << endl;
    cout << "**************************************************" << endl;

    cout << "Size of float : " << sizeof(float) << " bytes!" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes!" << endl;
    cout << "**************************************************" << endl;

    cout << "Size of char : " << sizeof(char) << " bytes!" << endl;
    cout << "**************************************************" << endl;

    string s;
    getline(cin, s);
    cout << "The given line is: " << s << endl;

    char c = 'e';
    cout << c << endl;

    int age;
    cout << "Enter age to check voting eligibility: " << endl;
    cin >> age;
    bool eligible = is_adult(age);
    cout << eligible << endl;
    if (eligible) cout << "ELIGIBLE" << endl;
    else cout << "NOT ELIGIBLE" << endl;

    // string is stored as character array
    string str = "somanabulism";
    for (int i = 0; i < str.size(); i++) cout << str[i] << "\n";
    cout << "**************************************************" << endl;

    int m, n;
    cout << "Enter the two nums to find max value: " << endl;
    cin >> m >> n;
    int maxValue = maxim(m, n);
    cout << "The maximum value is: " << maxValue << endl;
    cout << "**************************************************" << endl;

    int num = 5;
    /* here we are not passing the actual value to the function rather a
     * copy of the value 5 is passed to the function.
     * whereas num = 5 is not disturbed in the memory.
     * this is called PASS BY VALUE
     */
    doSomethingPassByValue(num);
    cout << num << endl; // here, num = 5 still.
    cout << "**************************************************" << endl;

    int newNum = 5;
    doSomethingPassByReference(newNum);
    cout << newNum << endl; // here, num = 15 (since its pass by reference)
    cout << "**************************************************" << endl;


    return 0;
}
