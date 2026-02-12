// Hint:
//  Count frequency of each character in both strings and compare the counts

// Example
//  Input: listen
//         silent
//  Output: Anagram

#include <iostream>
using namespace std;

int main()
{
    char first_string[200];
    char second_string[200];

    // TODO: read both lines
    cout << "INPUT" << endl;

    cout << "Enter first string: ";
    cin.getline(first_string, 200); // doesn't really need to be getline

    cout << "Enter second string: ";
    cin.getline(second_string, 200); // doesn't really need to be getline

    cout << endl;

    // TODO: frequency arrays size 256 (ASCII)
    // Hint: int freq1[256] = {0};
    int first_count[26] = { 0 };
    int second_count[26] = { 0 };

    // TODO: count characters except spaces
    for (int index = 0; first_string[index] != '\0'; index++)
    {
        int position = first_string[index] - 'a';
        first_count[position]++;
    }

    for (int index = 0; second_string[index] != '\0'; index++)
    {
        int position = second_string[index] - 'a';
        second_count[position]++;
    }

    // TODO: compare frequencies
    bool is_anagram = true;

    for (int index = 0; index < 26; index++)
    {
        if (first_count[index] != second_count[index])
        {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram)
    {
        cout << "OUTPUT\nAnagram" << endl;
    }
    else
    {
        cout << "OUTPUT\nNot Anagram" << endl;
    }

    return 0;
}
