#include <iostream>

using namespace std;

void getInputUser(char string[]) {
     cout << "Enter words: ";
     cin.get(string, 500);
}
void textOutput(int count) {
     cout << "Number words: " << count;
}
int wordCount(char string[500]) {
    int word = 0;
    int i = 0;
    int count = 0;
    while (string[i] != '\0') {
          if (string[i] != ' ' && word == 0)
          {
             if (string[i] >= 'a' && string[i] <= 'z') {
                word = 1;
                count++;
             }
          }
          else if (string[i] >= '0' && string[i] <= '9')
                  word = 0;
          i++;
    }
    return count;
}
void wordCountCycle(char string[500]) {
    int amount;
    amount = wordCount(string);
    textOutput(amount);
}
int main()
{
 char string[500];
 getInputUser(string);
 wordCountCycle(string);
}
