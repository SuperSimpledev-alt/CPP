#include <iostream>  
#include <string>    
using namespace std; 


int main()
{
    cout << "Do you want to play a game? (y/n): ";
    char response; // here we can also use int DATATYPE

    response = getchar(); // getchar is a function to read an input form the user.

    // here we are changing the varibale response from char to int DATATYPE
    // int r = static_cast<int> (response);
    cout << "You entered: " << response << "\n";

    // we use if condition to check for certain conditions.

    // we used comparision operator to compare the truthy and falsey value.
    if (tolower(response) == 'y')
    {
        cout << "Let's play a game then...\n";
        cout << "What difficulty? (easy/medium/hard): ";

        string difficulty;
        cin >> difficulty;
    
        if (difficulty == "easy")
            {
                cout << "ezpz lemon squeezy \n";
            } else if (difficulty == "medium") {
                cout << "medium. \n";
            }
            else if (difficulty == "hard") {
                cout << "hard. \n";
            }
   }
   else if (response == 'n') {
    cout << "I am not in the mood to play! ";
   }
    return 0;
}