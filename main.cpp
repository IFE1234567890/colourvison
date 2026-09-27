#include <iostream>
#include <string>

using namespace std;

int main()
{
    int visiontype;
    int again = 1;

    string colorOne;
    string colorTwo;
    string colorThree;

    while (again == 1)
    {
        cout << "COLOUR BLINDNESS PROGRAM" << endl;
        cout << "Please select Visiontype, thank you." << endl;
        cout << "1. Protanopia" << endl;
        cout << "2. Deuteranopia" << endl;
        cout << "3. Tritanopia" << endl;

        cout << "Enter choice: ";
        cin >> visiontype;

        if (visiontype == 1)
        {
            cout << "You selected Protanopia." << endl;
        }
        else if (visiontype == 2)
        {
            cout << "You selected Deuteranopia." << endl;
        }
        else if (visiontype == 3)
        {
            cout << "You selected Tritanopia." << endl;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }

        cout << "Enter the first color: ";
        cin >> colorOne;

        cout << "Enter the second color: ";
        cin >> colorTwo;

        cout << "Enter the third color: ";
        cin >> colorThree;

        switch (visiontype)
        {
            case 1:
                cout << "Protanopia check" << endl;
                break;

            case 2:
                cout << "Deuteranopia check" << endl;
                break;

            case 3:
                cout << "Tritanopia check" << endl;
                break;

            default:
                cout << "Invalid" << endl;
        }

        if (colorOne == colorTwo)
        {
            cout << "Color 1 and Color 2 are the same." << endl;
        }
        else if (colorOne == colorThree)
        {
            cout << "Color 1 and Color 3 are the same." << endl;
        }
        else
        {
            cout << "The colors are different." << endl;
        }

        cout << "Enter 1 to continue or 0 to stop: ";
        cin >> again;
    }

    cout << "Program ended." << endl;

    return 0;
}