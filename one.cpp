#include <iostream>  //including the input/output stream or directory
#include <string>    //inclusign the string functions from string directory
using namespace std; // used for including prefixvstd:: for cout/cin etc.

// the main fuction is the start of our code.
int main()
{

    // displaying the output
    cout << "What is your name?\n";

    // making a variable of string type
    string name;

    // Allowinig the user to input the data.
    cin >> name;

    // outputting the name that the user just entered
    cout << "your name is " << name << "\n";
    // system("pause");
    return 0;
}