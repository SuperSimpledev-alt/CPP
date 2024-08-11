#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Do you want to play a game? (y/n): ";
    char response;

    response = getchar();

    cout << "You entered: " << response << "\n";

    // we used comparision operator to compare the truthy and falsey value.
    if (tolower(response) == 'y')
    {
        cout << "Let's play a game then...\n";
        cout << "What difficulty?\n 0: easy\n1: medium\n3: hard\n";

        int difficulty;
        cin >> difficulty;

        cout << "You chose difficulty " << difficulty << endl;

        switch (difficulty)
        {
        case 0: // considered easy
        cout << "You chose easy";
            break;
        case 1: // considered medium
        cout << "You chose medium";
            break;
        case 2: // considered hard
        cout << "You chose hard";
            break;

        default:
        cout << "whatever you want";
            break;
        }
    }
    else if (response == 'n')
    {
        cout << "I am not in the mood to play! ";
    }
    return 0;
}