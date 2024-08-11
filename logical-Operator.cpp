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
        cout << "What difficulty? (easy/medium/hard): ";

        string difficulty;
        cin >> difficulty;
    
    // the '||' represents the OR condition. in programming it also known as OR Operator or Logical operator.
    // if any one condition found as truthy value the nested code will run.

    // try using the '&&' Operator; also know as the 'AND Operator' and look at what result does it give.
        if (difficulty == "easy" || difficulty == "medium" || difficulty == "hard")
            {
                cout << "responding enabled \n";
            } 
   }
   else if (response == 'n') {
    cout << "I am not in the mood to play! ";
   }
    return 0;
}