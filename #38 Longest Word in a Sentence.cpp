// Hint:
//  Track word length btwn spaces. Store the longest length and its start index

// Example
//  Input: C plus plus is powerful
//  Output: powerful

#include <iostream>
using namespace std;

int main()
{
    char sentence[300];

    // TODO: read line
    cout << "Input: ";
    cin.getline(sentence, 300);

    // TODO: scan char by char
    // TODO: Track current_word_start and current_length
    int longest_word_start = 0;
    int longest_word_length = 0;

    int current_word_start = 0;
    int current_word_length = 0;
        
    for (int char_index = 0; ; char_index++) // NO 2ND INPUT IN FOR LOOP**
    {
        if (sentence[char_index] == ' ' || sentence[char_index] == '\0')
        {
            if (current_word_length > longest_word_length)
            {
                longest_word_length = current_word_length;
                longest_word_start = current_word_start;
            }

            if (sentence[char_index] == '\0')
            {
                break;
            }

            current_word_length = 0;
            current_word_start = char_index + 1;
        }
        else
        {
            current_word_length++;
        }
    }    

    // TODO: When you hit space or '\0', compare and update best
    // (i.e. Print longest word)
    cout << "Output: ";

    for (int print_index = 0; print_index < longest_word_length; print_index++)
    {
        cout << sentence[longest_word_start + print_index];
    }
    cout << endl;

    return 0;
}