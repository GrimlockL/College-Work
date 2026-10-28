#include <iostream>
#include <string>// For std::to_string
using namespace std;
bool palindrome(int x) {// Function to check if an integer is a palindrome
    string s = to_string(x);//Converts the int x to a string
    int i = 0, j = s.length() - 1;//Pointers to the start and end of the string
    for (i = 0, j = s.length() - 1; i < j; i++, j--)//Loop to check if characters start and end are the same moving pointers towards the center of the string
        if (s.at(i) != s.at(j)) return false;//If the characters at the start and end are not the same, return false
    return true;
}

bool main() {
    int a;
    cout << "Enter an integer: ";// Prints a prompt for the user to enter an integer
    cin >> a;// Reads the integer input from the user and stores it in the variable a
    bool result = palindrome(a);// Variable made to store the result of the palindrome function by calling the palindrome function
    cout << boolalpha;//This allows the boolean value to be printed as true or false instead of 1 or 0
    cout << "Is palindrome: " << result << endl;// Prints the result to the console
    
}