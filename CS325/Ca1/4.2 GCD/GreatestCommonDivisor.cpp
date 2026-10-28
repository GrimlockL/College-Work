#include <iostream>
#include <numeric> // For std::gcd
using namespace std;
int gcd(int x, int y) {
    int gcdL = std::gcd(x, y);//Uses built in gcd function to calculate the greatest common divisor of x and y
    return gcdL;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";// Prints a prompt for the user to enter two integers
    cin >> a >> b;// Reads the two integer inputs from the user and stores them in the variables a and b
    int result = gcd(a, b);// Variable made to store the result of the gcd function by calling the gcd function
    cout << "GCD: " << result << endl;// Prints the result to the console
}