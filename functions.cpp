#include <iostream>
#include <string>
using namespace std;

// fucntion declaration
void playGame();

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
        cout << "What difficulty?\n 0: easy\n1: medium\n2: hard\n";
        int difficulty;
        cin >> difficulty;

        cout << "You chose difficulty " << difficulty << endl;

        switch (difficulty)
        {
        case 0: 
        case 1:
        case 2: // considered hard
        // function calling
            playGame();
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

// function definition
void playGame() {
    cout << "playing game";
}