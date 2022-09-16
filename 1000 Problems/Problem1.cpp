/*
* QUESTION ONE
* In this challenge, you will use a for loop to increment a variable through a range
*
* You will be given two positive integers, a and b (a < b), separated by a newline.
*
* OUTPUT FORMAT
* For each integer n in the inclusive interval [a,b];
*
* If 1 < n < 9, then print the English representation of it in lowercase. That is
* "one" for 1, "two" for 2 and so on...
*
* Else if n > 9 and it is an even number, then print "even".
*
* Else if n > 9 and it is an odd number, then print "odd".
*
* Sample Input
* 8
* 9
*
* Sample Output
* eight
* nine
* even
* odd
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	cout << "Enter any two numbers: " << endl;
	cin >> a >> b;
	
	for (int i = a; i <= b; i++) {
		if(i>=1 && i<=9){
			if (i == 1) cout << "one" << endl;
			if (i == 2) cout << "two" << endl;
			if (i == 3) cout << "three" << endl;
			if (i == 4) cout << "four" << endl;
			if (i == 5) cout << "five" << endl;
			if (i == 6) cout << "six" << endl;
			if (i == 7) cout << "seven" << endl;
			if (i == 8) cout << "eight" << endl;
			if (i == 9) cout << "nine" << endl;
		}
		else if (i > 9 && i % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;
		}
	}

}