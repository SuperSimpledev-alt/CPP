#include <iostream>
#include <string>
using namespace std;

// fucntion declaration
bool playGame(int guesses)
{
    cout << "Playing Game...\n";
    int correct = 42;
    cout << "Guess a number...";
    cout << "You get " << guesses << " guesses.\n";
    int guess;
    cin >> guess;

    if (guess == correct)
    {
        return true;
    }

    return false;
};

int main()
{
    cout << "Do you want to play a game? (y/n): ";
    char response;

    response = getchar();

    cout << "You entered: " << response << "\n";
    bool won;
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
            won = playGame(10);
            break;
        case 1:
            won = playGame(5);
            break;
        case 2: // considered hard
                // function calling
            won = playGame(3);
            break;

        default:
            cout << "whatever you want";
            break;
        }
    }

    if (won)
    {
        cout << "congrats. you won!";
    }
    else
    {
        cout << "try again later";
    }

    // else if (response == 'n')
    // {
    //     cout << "I am not in the mood to play! ";
    // }
    return 0;
}

// function definition
void playGame()
{
    cout << "playing game";
}