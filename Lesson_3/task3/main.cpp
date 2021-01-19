#include <iostream>


using namespace std;

int main()
{
    char string[500];
    int i = 0;
    cout << "Enter string: ";
    cin.get (string, 500);
    for (i = 0; i < string[i]; i++) {
        if (string [i] >= 'a' && string [i] <= 'z')
           string [i] -= 32;
    }
    cout << "Your string: " << string;
}
