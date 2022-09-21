//PROBLEM 5
//Swap Two Variables in C++
//You can swap two variables in C++ using the built in swap() function

#include <bits/stdC++.h>
using namespace std;

int main() {
	int x = 5, y = 10;

	string str1 = "MakeUseOf", str2 = "MUO";

	cout << "Before swapping: " << endl;
	cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    swap(x, y);
    swap(str1, str2);

    cout << "After Swapping: " << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    return 0;
}