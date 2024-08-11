#include <iostream> //includin the input/output stream or directory
#include<string> //inclusign the string functions from string directory
using namespace std; // used for cout/cin function

int main() {

// displating the out put
    cout << "What is your name?\n";

// making a variable of string type
    string name;

// taking the data from the user
    cin >> name;

// outputting the name that the user just entered
    cout << "your name is " << name << "\n";
    system("pause");
    return 0;
}