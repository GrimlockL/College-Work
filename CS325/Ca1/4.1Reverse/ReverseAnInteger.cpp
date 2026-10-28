#include <iostream>
using namespace std;
int reverse(int x) {
    int reversed = 0;// Variable to store the reversed integer
    while (x != 0) {
        reversed = reversed * 10 + x % 10;// Gets the last digit of x and adds it to new variable and is repeated by multplying by 10 and adding the next last digit of x
        x /= 10;// Removes the last digit of x by dividing by 10
    }
    return reversed;
}

int main() {
    int number;
    cout << "Enter an integer: ";// Prints a prompt for the user to enter an integer
    cin >> number;// Reads the integer input from the user and Sstores it in the variable number
    int reversedNumber = reverse(number);//Varibale made to store the reversed integer by calling the reverse function
    cout << "Reversed integer: " << reversedNumber << endl;// Prints the reversed integer to the console
}