#include <iostream>
using namespace std;

char* copy (char* dest, const char* src)
{
    int lenSrc = 0;
    while (src[lenSrc] != '\0')//While loop to count length of src
    {
        lenSrc++;
    }

    int lenDest = 0;
    while (dest[lenDest] != '\0')//While loop to count length of dest
    {
        lenDest++;
    }

    if (lenDest < lenSrc)//Compare lengths of dest and src, if dest is smaller than src return NULL
    {
        return NULL;
    }

    int i = 0;
    while (src[i] != '\0')//While loop to copy src to dest
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

void copy_test_case_1()//Test case 1 for copy function
{
    char dest[10] = "ccccccccc";//Destination string with enough space to hold the source string
    char* result = copy(dest, "hello");//Variable to hold result of copy
    cout << "Expected: hello" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void copy_test_case_2()
{
    char dest[6] = "ccccc";//Destination string with enough space to hold the source string
    char* result = copy(dest, "what");//Variable to hold result of copy
    cout << "Expected: what" << endl;//Expected output
    cout << "Actual:   " << result << endl;//Actual output
}

void copy_test_case_3()
{
    char dest[2] = "c";//Destination string with not enough space to hold the source string
    char* result = copy(dest, "hello");//Variable to hold result of copy
    cout << "Expected: NULL" << endl;//Expected output
    if (result == NULL)//Check if result is NULL
        cout << "Passed received Null" << endl;
    else
        cout << "Failed received non-Null" << endl;
}

int main()
{
    copy_test_case_1();//Call test cases
    copy_test_case_2();
    copy_test_case_3();
}