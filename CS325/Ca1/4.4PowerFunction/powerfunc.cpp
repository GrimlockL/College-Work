#include <iostream>
using namespace std;
//I assume y>=0 as negative powers are not defined for integers
long long power(long long x, long long y) {
    if(y == 0) return 1; // If the exponent is 0, return 1 as any number raised to the power of 0 is 1
    long long half = power(x, y / 2); // Recursively calculate the power of x raised to half of y
    if (y % 2 == 0) {
        return half * half; // We use the property that x^y = (x^(y/2))^2 when y is even, so we return half squared due to the fact that we have an even exponent
    } else {
        return half * half * x; // We use the property that x^y = (x^(y/2))^2 * x when y is odd, so we return half squared multiplied by x due the fact that we have one extra x to multiply when y is odd
    }
}

int main() {
    long long a, b;
    cout << "Enter two integers: ";// Prints a prompt for the user to enter two integers
    cin >> a >> b;// Reads the two integer inputs from the user and stores them in the variables a and b
    long long result = power(a, b);// Variable made to store the result of the power function by calling the power function
    cout << "Power: " << result << endl;// Prints the result to the console
}