#include <iostream>

using namespace std;
char* substring(int i, int j, const char* str)
{
    if (i < 0 || j < i || str == NULL || j >= sizeof(str) || i >= sizeof(str))//Checks if its valid
        return NULL;

    int l = j - i + 1;//Take the end from the start and add 1 so we have the length of substr

    char* s = new char[l + 1];//new substring storage with +1 for \0

    for (int a = 0; a < l; a++)
    {
        s[a] = str[i + a];//Copy the substring from the original string to the new substring
    }

    s[l] = '\0';//Add the null terminator at the end of the substring

    return s;
}

void substring_test_case_1()
{
    char* result = substring(0, 2, "hello");//Variable to hold result of substring
    cout << "Expected: hel" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void substring_test_case_2()
{
    char* result = substring(1, 3, "hello");//Variable to hold result of substring
    cout << "Expected: ell" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void substring_test_case_3()
{
    char* result = substring(-1, 2, "hello");//Variable to hold result of substring

    if (result == NULL)//Check if result is NULL
        cout << "Passed received Null" << endl;
    else
        cout << "Failed received non-Null" << endl;
}

int main()
{
    substring_test_case_1();//Call test cases
    substring_test_case_2();
    substring_test_case_3();
}