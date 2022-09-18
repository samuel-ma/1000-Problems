//using Functions

/*
* QUESTION 2
* Max of four
* 
* Write a function int max_of_four(int a, int b, int c, int d)
* which returns the maximum of the four arguments it receives.
* 
* Input Format
* Input will contain four integers -a, b, c , d one per line
* 
* Output Format
* Return the greatest of the four integers
* PS: I/O will be automatcially handled
* 
* Sample Input
* 2
* 3
* 6
* 5
* 
* Sample Output
* 6
*/

#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/


int max_of_four(int _a, int _b, int _c, int _d){
    int ar[]={_a,_b,_c,_d};
    return *max_element(ar,ar+4);

}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
