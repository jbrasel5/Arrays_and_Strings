// Hint:
//  Count consecutive repeated characters and print character followed by count

// Example
//  Input: aaabbc
//  Output: a3b2c1

#include <iostream>
using namespace std;

int main()
{
    char word[200];

    // TODO: read word
    cout << "Input: ";
    cin >> word;

    // TODO: scan from left to right
    // Count how many times current char repeats consecutively
    cout << "Output: ";
    for (int char_index = 0; word[char_index] != '\0'; )
    {
        char current_char = word[char_index];
        int repeat_count = 0;

        while (word[char_index] == current_char)
        {
            repeat_count++;
            char_index++;
        }

        cout << current_char << repeat_count;
    }
    cout << endl;

    return 0;
}
