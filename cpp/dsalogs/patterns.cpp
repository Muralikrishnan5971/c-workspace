#include <iostream>

using namespace std;

void boxOfStars(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << "* ";
        cout << endl;
    }
}

void rightTriangleOfStars(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void rightTriangleOfNums(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void rightTriangleOfRowNums(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void invertedRightTriangleOfStars(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedRightTriangleOfNums(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void nStarTriangle(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < ((2 * i) + 1); j++)
        {
            cout << "*";
        }
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void invertedNStarTriangle(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < ((2 * n) - ((2 * i) + 1)); j++)
        {
            cout << "*";
        }
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void nStarDiamond(int n)
{
    nStarTriangle(n);
    invertedNStarTriangle(n);
}

int main()
{
/* patters always use nested loops.
 * for outer loops, count the lines (rows).
 * for the inner loops focus on the columns, and connect
 * them somehow to the rows.
 * whatever we are printing, do it inside the inner loop.
 * observer for symmetry in case of some patterns (optional).
 */
    boxOfStars(5);
    cout << "---------------------------------------------" << endl;
    rightTriangleOfStars(5);
    cout << "---------------------------------------------" << endl;
    rightTriangleOfNums(5);
    cout << "---------------------------------------------" << endl;
    rightTriangleOfRowNums(5);
    cout << "---------------------------------------------" << endl;
    invertedRightTriangleOfStars(5);
    cout << "---------------------------------------------" << endl;
    invertedRightTriangleOfNums(5);
    cout << "---------------------------------------------" << endl;
    nStarTriangle(5);
    cout << "---------------------------------------------" << endl;
    invertedNStarTriangle(5);
    cout << "---------------------------------------------" << endl;
    nStarDiamond(5);
    cout << "---------------------------------------------" << endl;

    // YET TO COMPLETE


    return 0;
}
