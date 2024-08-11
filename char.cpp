#include <iostream>  //including the input/output stream or directory
#include <string>    //inclusign the string functions from string directory
using namespace std; // used for including prefixvstd:: for cout/cin etc.

// the main fuction is the start of our code.
int main()
{
    cout << "Do you want to play a game? (y/n): ";
    char response; //we used the char datatype rather than string
    //char are used to count just the single charachters
    //and they are nounded by single quotes; meaning, now you can use single quotes
    //in the condition section of teh if statement. like so (responde == 'y')..
    //u can look at the of statement.
    cin >> response;
    cout << "You entered: " << response << "\n";


// we use if condition to check for certain conditions.

// we used comparision operator to compare the truthy and falsey value.
    if(response == 'y') {
        cout << "Let's play a game then...\n";
    }
    return 0;
}