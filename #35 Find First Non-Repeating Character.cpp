// Hint:
//  For each char, count its occurrences. The first with count = 1 is the answer

// Example
//  Input: swiss
//  Output: w

#include <iostream>
using namespace std;

int main()
{
    char text[200];

    // TODO: read line
    cout << "Input: ";
    cin.getline(text, 200);

    // TODO: for each char, count occurrences by scanning again
    // Hint: nested loop count
    char first_unique_char = '\0';

    for (int text_index = 0; text[text_index] != '\0'; text_index++)
    {
        int char_count = 0;

        for (int result_index = 0; text[result_index] != '\0'; result_index++)
        {
            if (text[text_index] == text[result_index])
            {
                char_count++;
            }

        }

        if (char_count == 1)
        {
            first_unique_char = text[text_index];
            break;
        }
    }

    if (first_unique_char == '\0')
    {
        cout << "Output: None" << endl;
    }
    else
    {
        cout << "Output: " << first_unique_char << endl;
    }

    return 0;
}
