//PROBLEM 4
//Shuffle an Array
//You can shuffle an array in C++ using the Shuffle() function

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> arr = { 1,2,3,4 };
	unsigned seed = 0;

	cout << "Original array: ";

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    cout << endl;

    shuffle(arr.begin(), arr.end(), default_random_engine(seed));

    cout << "Shuffled array:";

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}