#include <iostream>
#include <string.h>

using namespace std;

// Func to print the string if there is a space it will fill with asterisk
void PrintString(string name, int n)
{
    cout << "3. Printing your String! " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " ";
    }
    cout << endl;
    // using name.at() function to check the element at the index
    cout << "Your String contains: " << name << " And the First index 0 contains! " << name.at(1) << endl
         << endl;
}

// Function to check if the string has less that 8 chars
void CheckCharLen(string name, int n)
{
    cout << "2. Checking if the String is on upper case or lower case" << endl
         << endl;
    char stores;
    for (char c : name)
    {
        stores = c;
    }
    if (islower(stores))
    {
        cout << "Your String is on Low case!  ";
    }
    if (isupper(stores))
    {
        cout << "Your String is on Upper case!  ";
    }
    cout << endl;
}

// Functions to check if the string is empty if yes print something
bool checkStringsisEmpty(string name, int n)
{
    bool a = name.empty();
    cout << "1. Checking if the String is Empty or not " << endl
         << endl;
    if (a == 1)
    {
        cout << "******##$%$$****";
    }
    else
    {
        cout << "All is well!" << endl
             << endl;
    }
}

// Main Function below
int main()
{

    string name;
    getline(cin, name);
    int n = name.length();

    // Func to check if the string is empty
    checkStringsisEmpty(name, n);

    // Function to check Character length
    CheckCharLen(name, n);

    // func to print the elements
    PrintString(name, n);

    return 0;
}