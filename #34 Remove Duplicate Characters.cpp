// Hint:
//  Copy a character only if it has NOT appeared earlier in the result array

// Example
//  Input: banana
//  Output: ban

#include <iostream>
using namespace std;

int main()
{
    char text[200];
    char result[200];

    // TODO: read line
    cout << "Input: ";
    cin.getline(text, 200);

    // TODO: for each char in text, check if it already exists in result
    // Hint: use an inner loop to search result
    int unique_index = 0;

    for (int text_index = 0; text[text_index] != '\0'; text_index++)
    {
        bool is_duplicate = false;

        for (int result_index = 0; result_index < unique_index; result_index++)
        {
            if (text[text_index] == result[result_index])
            {
                is_duplicate = true;
                break;
            }

        }

        if (is_duplicate == false) // "is_duplicate == false" = "!is_duplicate"
        {
            result[unique_index] = text[text_index];
            unique_index++;
        }
    }

    // TODO: build result and add '\0' at end
    // pg 81: first_string[first_index] = '\0';
    result[unique_index] = '\0';

    cout << "Output: " << result << endl;

    return 0;
}