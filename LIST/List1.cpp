#include <iostream>
#include <list>
using namespace std;

int main()
{

    // Creating a list of data type String named => names
    list<string> names;
    // Creating a list of data type int named => age
    list<int> age;

    // Adding/pushing/inserting elements in the list
    names.push_back("Gourav");
    names.push_back("Sourav");
    names.push_back("Umesh");
    names.push_back("Raghav");

    // Adding/pushing/inserting elements in the list
    age.push_back(32);
    age.push_back(22);
    age.push_back(42);
    age.push_back(52);

    // Printing the size of the first list
    cout << names.size() << endl;

    // I am inserting a new name/element at the back of the list or end of the list
    names.insert(names.end(), "Rakesh");
    // I am inserting a new number/age/element at the front of the list or start of the list
    age.insert(age.begin(), 62);

    // Below I have created 2 iterators so that I can iterate over the list integer and string elements
    list<string>::iterator st = names.begin();
    list<int>::iterator it = age.begin();

    // Below is the while loops I have used the iterators it and st that I have created above this code to iterate over the string and int list
    while (it != age.end() && st != names.end())
    {
        cout << "Name of the candidate is: " << *st << " " << " and the age is: " << *it << endl;
        //increamenting the iterators it and st to iterate to the next value
        it++;
        st++;
    }

    return 0;
}