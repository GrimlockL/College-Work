#include <iostream>
using namespace std;
unsigned int length(const char* x) {
    unsigned int len = 0;//Variable to hold length of string
    while (x[len] != '\0') {//while loop to count till null terminator
        len++;
    }
    return len;//return length
    
}

void length_test_case_1()//Test case 1 for length function
{
    unsigned int result = length("hello");//Variable to hold result of length
    cout << "Expected: 5" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void length_test_case_2()//Test case 2 for length function
{
    unsigned int result = length("");//Variable to hold result of length
    cout << "Expected: 0" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void length_test_case_3()
{
    unsigned int result = length("length");//Variable to hold result of length
    cout << "Expected: 6" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

int main()
{
    length_test_case_1();//Call test cases
    length_test_case_2();
    length_test_case_3();
}