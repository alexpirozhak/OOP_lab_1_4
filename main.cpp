#include <iostream>
#include "Train.h"

using namespace std;

int main()
{
    Train train;
    int choice;
    do
    {
        cout << "[1] - Train from file" << endl;
        cout << "[2] - Train from the keyboard" << endl;
        cout << "[3] - Display" << endl;
        cout << "[4] - Split train" << endl;
        cout << "[0] - Exit the program" << endl;
        cout << "Enter the command value: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
            case 1:
                train.FromFile("test.txt");
                break;
            case 2:
                train.Read();
                break;
            case 3:
                train.Display();
                break;
            case 4:
                train.Split();
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice" << endl;
                choice = 0;
                break;
        }
    } while (choice != 0);

    return 0;
}