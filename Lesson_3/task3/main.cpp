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
    }
}
