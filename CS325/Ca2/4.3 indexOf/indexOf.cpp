#include <iostream>
using namespace std;
int indexOf (char c, const char* str) {
    unsigned int len = 0;//Variable to hold length of string
    while (str[len] != '\0') {//while loop to count till null terminator
        if(str[len] == c) {// Check if the current character matches the target character
            return len;// Return the index of the character if found
        }
        len++;
    }
    return -1; // Return -1 if character is not found
}

void indexOf_test_case_1()
{
    int result = indexOf('e', "hello");//Variable to hold result of indexOf
    cout << "Expected: 1" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void indexOf_test_case_2()
{
    int result = indexOf('l', "hello");//Variable to hold result of indexOf
    cout << "Expected: 2" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void indexOf_test_case_3()
{
    int result = indexOf('x', "hello");//Variable to hold result of indexOf
    cout << "Expected: -1" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

int main()
{
    indexOf_test_case_1();//Call test cases
    indexOf_test_case_2();
    indexOf_test_case_3();
}