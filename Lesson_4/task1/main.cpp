#include <iostream>

using namespace std;

void cycle (int sum, int money, int arr [10], int num, char ex) {
    while (true)
    {
        cout << "Enter credit card number: ";
        cin >> num;
        cout << "How much money do you want to put on the card? ";
        cin >> money;
        sum += money;
        arr [num-1] += money;
        for (int i = 0; i < 10; i++)
        {
            cout << arr [i] << " ";
        }
        cout << endl;
        cout << "The amount of the money on all cards: " << sum << endl;
        cout << "Press F for exit" << endl;
        cin >> ex;
        if (ex == 'F') {
           break;
        }
        cout << endl;
    }
}

void zero (int arr [10]) {
     for (int i = 0; i < 10; i++)
     {
         arr [i] = 0;
     }
}


int main()
{
    int arr [10], num = 0, money = 0, sum = 0;
    char ex;
    zero(arr);
    cycle(sum, money, arr, num, ex);
}
