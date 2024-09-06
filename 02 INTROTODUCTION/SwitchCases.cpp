/*
Switch case conditions:

1. Expression Types that can be used: Enum, char, int.
   Expression Types that cannot be used: Non integral values, float, string, boolean

2. Unique case values: case has to be unique, we cannot use case A and case A again

3. No range checking: Expression has to be constant and we cannot check condition in case, we can check it in expression

4. Fall through behavior: without break all the cases will run, hence need to run a break case

5. Execution order: We run in sequential order is Switch case
*/

#include <iostream>
using namespace std;

int main()
{

    char grade;
    cout << "Enter the grade: " << endl;
    cin >> grade;

    // Grade is used as the expression to test the cases
    switch (grade)
    {

    // case 1
    case 'A':
        // login section of the case
        cout << "Your grade is in between 90-100" << endl;
        // break is used to terminate the case and jump to another case if the condition is not matching
        break;
    // case 2
    case 'B':
        cout << "Your grade is in between 80-90" << endl;
        break;
    // case 3
    case 'C':
        cout << "Your grade is in between 70-80" << endl;
        break;
    // case 4
    case 'D':
        cout << "Your grade is in between 60-70" << endl;
        break;

    // Defaut is not mandatory - still we can use it
    default:
        cout << "Your grade is in between 0-60" << endl;
    }

    return 0;
}