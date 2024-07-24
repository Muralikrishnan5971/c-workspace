#include <iostream>
#include <vector>

using namespace std;

void explainPair()
{
    pair<int, int> p = {4, 72};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> m = {1, {4, 6}};
    cout << m.first << " " << m.second.first << endl;

    // array of pairs
    pair<int, int> arr[] = {{1, 2}, {4, 5}, {7, 8}};
    cout << arr[0].first << " " << arr[2].second << endl;

}

void explainVector()
{
    // vectors are dynamic array
    //

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // faster method

    // this will create a container with 5 items each
    // with value basically {20, 20, 20, 20, 20}
    vector<int> v2(5, 20);

    // we can pass a copy of a vector to create another
    // container
    vector<int> v3(v2);

    // accessing elements from a vector

    vector<int> arr;
    arr.emplace_back(3);
    arr.emplace_back(4);
    arr.emplace_back(8);
    arr.emplace_back(2);
    arr.emplace_back(9);
    arr.emplace_back(1);

    cout << arr[0] << endl;
    cout << arr.at(0) << endl;

    vector<int>::iterator it = v.begin();
    cout << *(it + 2 ) << endl;


}

int main()
{

/* CPP STL contains 4 parts
------------------------

1. algorithms
2. containers
3. functinons
4. iterators


*/

    explainPair();
    explainVector();

}
