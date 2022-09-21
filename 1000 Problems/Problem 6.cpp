//PROBLEM 6
//Copy a Vector to Another Vector

#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> vec)
{
    for (auto ele : vec)
    {
        cout << ele << " ";
    }

    cout << endl;
}

int main()
{
    vector <int> vec = { 1, 2, 3, 4, 5 };
    printVector(vec);

    // Method 1: Using Assignment Operator
    vector <int> newVec1 = vec;
    printVector(newVec1);

    // Method 2: By passing vector as constructor
    vector <int> newVec2(vec);
    printVector(newVec2);

    return 0;
}