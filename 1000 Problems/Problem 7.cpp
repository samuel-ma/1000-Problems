//PROBLEM 7
//Find the Maximum and Minimum Elements in an Array
//You can find the maximum and minimum elements from an array using 
//the max_element() and min_element() functions in C++

#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int arr[] = { 23, 56, 87, 12, 56 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Max element: " << *max_element(arr, arr + size) << endl;
    cout << "Min element: " << *min_element(arr, arr + size) << endl;

    return 0;
}