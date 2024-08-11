#include <iostream>  //including the input/output stream or directory
#include <string>    //inclusign the string functions from string directory
using namespace std; // used for including prefixvstd:: for cout/cin etc.

// the main fuction is the start of our code.
int main()
{
    cout << "Do you want to play a game? (y/n): ";
    string response;
    cin >> response;
    cout << "You entered: " << response << "\n";


// we use if condition to check for certain conditions.

// we used comparision operator to compare the truthy and falsey value.
    if(response == "y") {
        cout << "Let's play a game then...\n";
    }
    return 0;
}