#include <iostream>
using namespace std;
char* replace(char c, char p, const char* str)
{
    int l = 0;//Variable to hold length of string

    while (str[l] != '\0')//While loop to count length of str
    {
        l++;
    }

    char* s = new char[l + 1];//new substring storage with +1 for \0

    for (int a = 0; a < l; a++)//For loop to iterate through str and replace c with p
    {
        if (str[a] == c)//Check if the current character matches the target character
        {
            s[a] = p;
        }
        else//Else just copies the character from str to s
        {
            s[a] = str[a];
        }
    }

    s[l] = '\0';//Add the null terminator at the end of the substring

    return s;//Return the new string with replacements
}

void replace_test_case_1()
{
    char str[] = "hello";//Variable to hold the original string
    char* result = replace('l', 'L', str);//Variable to hold result of replace
    cout << "Expected: heLLo" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void replace_test_case_2()
{
    char str[] = "world";//Variable to hold the original string
    char* result = replace('o', 'O', str);//Variable to hold result of replace
    cout << "Expected: wOrld" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void replace_test_case_3()
{
    char str[] = "hello";//Variable to hold the original string
    char* result = replace('x', 'X', str);//Variable to hold result of replace
    cout << "Expected: hello" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

int main()
{
    replace_test_case_1();//Call test cases
    replace_test_case_2();
    replace_test_case_3();
}