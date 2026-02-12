// Hint:
//  Scan the string. If a character is a space, replace it with -

// Example
//  Input: C plus plus strings
//  Output: C-plus-plus-strings

#include <iostream>
using namespace std;

int main()
{
    char sentence[200];

    // TODO: read line
    cout << "Input: ";
    cin.getline(sentence, 200);

    // TODO: loop through characters
    // if sentence[i] == ' ' then replace with '-'
    for (int index = 0; sentence[index] != '\0'; index++)
    {
        if (sentence[index] == ' ')
        {
            sentence[index] = '-';
        }
    }

    cout << "Output: " << sentence << endl;

    return 0;
}