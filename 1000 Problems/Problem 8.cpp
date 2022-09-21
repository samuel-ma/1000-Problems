//PROBLEM 8
//Remove Duplicate from a string

#include <bits/stdc++.h>
using namespace std;

void removeDuplicateCharacters(char str[], int size)
{
    int newIndex = 0;

    // Traversing through all the characters
    for (int i = 0; i < size; i++)
    {
        int j;

        // Traversing loop from the first character to current character
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
        }

        if (j == i)
        {
            str[newIndex++] = str[i];
        }
    }

    // After removing duplicates, we make
    // the vacant part of string to null
    str[newIndex] = '\0';
}

int main()
{
    char str[] = "MakeUseOf";
    int size = strlen(str);

    cout << "Original String: " << endl;
    cout << str << endl;

    removeDuplicateCharacters(str, size);

    cout << "New String: " << endl;
    cout << str << endl;
    return 0;
}