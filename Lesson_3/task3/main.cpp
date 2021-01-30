#include <iostream>


using namespace std;

int main()
{
    char string[500];
    char tempo;
    int i = 0;
    cout << "Enter string: ";
    cin.get (string, 500);
    cout << "Your string: ";
    for (i = 0; i < string[i]; i++) {
        if (string [i] >= 'a' && string [i] <= 'z') {
           tempo = string [i];
           tempo -= 32;
           cout << tempo;
        }
        if ((string [i] >= 0 && string[i] <= 96) || (string [i] >= 123 && string[i] <= 126)) {
           tempo = string [i];
           cout << tempo;
        }
    }
}
