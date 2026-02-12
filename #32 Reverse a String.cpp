// Hint:
//  Use 2 indexes: left = 0, right = text.length()-1
//  Swap characters until left < right

// Example
//  Input: HELLO
//  Output: OLLEH

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char text[200];

    // TODO: read a full line (including spaces)
    // Hint: cin.getline(text, 200);
    cout << "Input: ";
    cin.getline(text, 200);

    // TODO: find length manually or using strlen(text)
    // Hint (manual): loop until '\0'
    int length = 0;
    while (text[length] != '\0')
    {
        length++;
    }

    // TODO: swap characters from start and end
    // Hint: use left_index, right_index and swap until left < right
    int left_index = 0;
    int right_index = length - 1;
    while (left_index < right_index)
    {
        char temp = text[left_index];
        text[left_index] = text[right_index];
        text[right_index] = temp;

        left_index++;
        right_index--;
    }

    // TODO: print reversed string
    cout << "Output: " << text;

    return 0;
}
