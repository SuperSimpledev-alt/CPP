#include <iostream>  //including the input/output stream or directory
#include <string>    //inclusign the string functions from string directory
using namespace std; // used for including prefixvstd:: for cout/cin etc.

// the main fuction is the start of our code.
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
    }
    else if (tolower(response) == 'n')
    {
        cout << "Not really in the mood! \n";
    }
    else
    {
        cout << "not now...\n";
    }
    return 0;
}