// Read two lines:
//  1. a main text
//  2. a pattern
//     Find the FIRST INDEX where the pattern occurs in the text (0-based).
//     If not found, print -1

// Hint:
//  - First, find the LENGTH of the main text and the search pattern
//  - Try to match the pattern starting from EACH POSSIBLE POSITION in the text
//  - At each position, compare the pattern CHARACTER BY CHARACTER with the text
//  - If any character does not match, stop and move to the NEXT POSITION
//  - If all characters match at a position, record that STARTING INDEX.
//  - If the pattern never matches, return -1

// Example
//  Input: I love programming
//         program
//  Output: 7

#include <iostream>
using namespace std;

int main()
{
    char text[300];
    char pattern[300];

    // TODO: read both lines
    cout << "INPUT " << endl;

    cout << "Enter text: ";
    cin.getline(text, 300);

    cout << "Enter pattern: ";
    cin.getline(pattern, 300);

    cout << endl;

    // TODO: manual search
    // For each position index in text:
    //   compare pattern with text starting at index
    //   if full match -> print index and stop
    int text_length = 0;
    while (text[text_length] != '\0')
    {
        text_length++;
    }

    int pattern_length = 0;
    while (pattern[pattern_length] != '\0')
    {
        pattern_length++;
    }

    int found_start_index = -1;

    for (int text_index = 0; text_index <= text_length - pattern_length; text_index++)
    {
        bool is_match = true;

        for (int pattern_index = 0; pattern_index < pattern_length; pattern_index++)
        {
            if (text[text_index + pattern_index] != pattern[pattern_index])
            {
                is_match = false;
                break;
            }
        }

        if (is_match)
        {
            found_start_index = text_index;
            break;
        }
    }

    cout << "OUTPUT" << endl;
    cout << found_start_index << endl;
    return 0;
}