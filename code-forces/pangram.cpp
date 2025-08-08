#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int size_char;
    string phrase;
    bool letters[26] = {false};
    cin >> size_char;
    cin >> phrase;
    
    for (int i = 0; i < phrase.length(); i++)
    {
        char lower_letter = tolower(phrase[i]);
        if (lower_letter >= 'a' && lower_letter <= 'z') {
            letters[lower_letter - 'a'] = true;
        }
    }

    bool is_pangram = true;
    for (int j = 0; j < 26; j++)
    {
        if (!letters[j]) {
            is_pangram = false;
            break;
        }
    }

    if (is_pangram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}