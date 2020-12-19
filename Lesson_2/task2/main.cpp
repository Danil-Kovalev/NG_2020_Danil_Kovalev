#include <iostream>

using namespace std;

int main()
{
    int arr [10];
    int num = 0;
    int money = 0;
    int sum = 0;
    char ex;
    for (int i = 0; i< 10; i ++)
    {
        arr [i] = 0;
    }
    while (true)
    {
        cout << "Enter credit card number:" << endl;
        cin >> num;
        cout << "How much money do you want to put on the card?" << endl;
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
    return 0;
}
