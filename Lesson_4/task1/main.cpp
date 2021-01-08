#include <iostream>

using namespace std;

int getCreditNumber () {
    int numberCard;
    cout << "Enter credit card number: ";
    cin >> numberCard;
    return numberCard;
}
int getMoney () {
    int money;
    cout << "How much money do you want to put on the card? ";
    cin >> money;
    return money;
}
int userInput (int arr []) {
    int num = getCreditNumber();
    int money = getMoney();
    arr [num-1] += money;
    return money;
}
int showCards (int arr []) {
    for (int i = 0; i < 10; i++)
        {
            cout << arr [i] << " ";
        }
        cout << endl;
}
void showSum(int sum) {
    cout << "The amount of the money on all cards: " << sum << endl;
}
int exitOfCycle() {
    char ex = 0;
    cout << "Press F for exit" << endl;
    cin >> ex;
    if (ex == 'F')
        return 1;
    else
        return 0;
}

void startOperationAtm (int arr []) {
    int sum = 0;
    while (true)
    {
          int money = userInput(arr);
          sum += money;
          showCards(arr);
          showSum(sum);
          if (exitOfCycle() == 1)
             return;
    }
}

void clean (int arr []) {
     for (int i = 0; i < 10; i++)
     {
         arr [i] = 0;
     }
}


int main()
{
    int arr [10];
    clean(arr);
    startOperationAtm(arr);
}
