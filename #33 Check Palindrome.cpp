// Hint:
//  Compare first and last characters. If all opposite pairs match, it is a palindrome

// Example
//  Input: MADAM
//  Output: Palindrome

#include <iostream>
using namespace std;

int main()
{
    char word[100];

    // TODO: read a word (no spaces)
    // Hint: cin >> word;
    cout << "Input: ";
    cin >> word;

    // TODO: find length
    int length = 0;
    while (word[length] != '\0')
    {
        length++;
    }

    // TODO: compare word[left] and word[right]
    // Hint: if mismatch -> not palindrome
    int left_index = 0;
    int right_index = length - 1;
    int result = 0;
    bool is_palindrome = true;

    while (left_index < right_index)
    {
        if (word[left_index] != word[right_index])
        {
            is_palindrome = false;
            cout << "Output: Not a Palindrome";
            break;
        }

        left_index++;
        right_index--;
    }

    if (is_palindrome == true)
    {
        cout << "Output: Palindrome";
    }

    return 0;
}
