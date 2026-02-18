// Write a C++ program using C-STYLE CHARACTER ARRAYS (char[]) to find
//   the LENGTH OF THE LONGEST SUBSTRING (continuous part) of a string that
//   has NO REPEATING CHARACTERS.
// A SUBSTRING must be continuous.
//   Example: in "abcabcbb", "abc" is a substring, but "acb" is not

/*
Input/Output Examples:
Example 1
    Input: abcabcbb
    Output: 3
Example 2
    Input: bbbbb
    Output: 1
Example 3
    Input: pwwkew
    Output: 3 (because "wke")
*/

/*
Hints
1. We will use two indexes:
  - start_index = start of current window(substring)
  - end_index = end of current window
2. Keep a visited[256] array to store whether a character is currently inside the window
3. Expand end_index forward
4. If the new character is already inside the window:
  - move start_index forward until that character is removed
5. Track the maximum window length
This is called the SLIDING WINDOW method
*/

#include <iostream>
using namespace std;

int main()
{
    char input_text[300];

    // 1) Read the full line (including spaces)
    cout << "Enter a string: ";
    cin.getline(input_text, 300);

    // 2) Create visited array for all ASCII characters (0 to 255)
    bool visited[256] = { false };

    // 3) Use two pointers: start_index and end_index
    int start_index = 0;
    int end_index = 0;

    int max_length = 0;

    // 4) Move end_index through the string
    while (input_text[end_index] != '\0')
    {
        char current_char = input_text[end_index];

        // - If current character already in window,
        //     remove characters from start until it becomes unique
        //     (i.e. shrink window from left)
        while (visited[current_char] == true)
        {
            char left_char = input_text[start_index];
            visited[left_char] = false;
            start_index++;
        }

        // - Add current character to window
        //     (i.e. mark current character as visited)
        visited[current_char] = true;

        int current_length = end_index - start_index + 1;
        if (current_length > max_length)
        {
            // - Update max_length
            max_length = current_length;
        }

        end_index++;

    }

    // 5) Print max_length
    cout << "Longest length without repeating characters = " << max_length << endl;

    return 0;
}
