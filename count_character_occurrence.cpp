#include <iostream>
#include <string>

using namespace std;

/*
 * Algorithm Challenge & Problem Solving Level 3 – Challenge #30 Count Occurrences of a Character in a String
 *
 * This program reads a string and a single character from the user, then counts how many times the given character appears in the string.
 *
 * The challenge focuses on:
 * - Linear search algorithms
 * - Counting occurrences
 * - String traversal
 * - Writing clean and reusable functions
 */

// Reads a full string from the user
string ReadString()
{
    string Text;
    cout << "Enter a string:\n";
    getline(cin, Text);
    return Text;
}

// Reads a single character to be counted
char ReadChar()
{
    char Char1;
    cout << "Enter a character to count:\n";
    cin >> Char1;
    return Char1;
}

// Counts how many times a character appears in the string
short CountLetter(string S1, char Ch1)
{
    short Counter = 0;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] == Ch1)
            Counter++;
    }

    return Counter;
}

int main()
{
    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "\nLetter '" << Ch1 << "' Count = "
         << CountLetter(S1, Ch1) << endl;

    return 0;
}
