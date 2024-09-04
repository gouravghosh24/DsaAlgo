#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Student
{

    // Public members
public:
    int marks;
    string name;

    // default contructor
    Student() {}

    // Parameterised Constructor
    Student(int m, string n)
    {
        this->marks = m;
        this->name = n;
    }
};

// Writing Functor to compare the marks in ascending order

class StudentMarks
{

public:
    // Functor to print the marks in acsending order
    bool operator()(Student a, Student b)
    {

        // If the marks are equal then we will sort it in lexicographical way character wise in the string
        if (a.marks == b.marks)
        {
            return a.name < b.name;
        }

        // It will return the marks if the marks of A is less than B
        // So it will arrange the marks on the students in Smaller to larger which is ascending order
        return a.marks < b.marks;
    }
};
// Comparator 1 end

// Comparator 2 beings

class StdComparator
{

public:
    bool operator()(Student a, Student b)
    {

        // Criteria for the comparison ascending order min marks->high piority
        return a.marks > b.marks;
    }
};

// Main Function Begins
int main()
{

    // Creting a vector using the student class object
    vector<Student> S;

    // Pushing elements in the object members
    S.push_back(Student(80, "Gourav"));
    S.push_back(Student(85, "Akash"));
    S.push_back(Student(90, "Rohit"));
    S.push_back(Student(90, "Ramesh"));

    // Creating a student queue
    priority_queue<Student, vector<Student>, StdComparator> Sq;

    // Pushing Elements in Student

    Sq.push(Student(20, "Sam"));
    Sq.push(Student(25, "Neil"));
    Sq.push(Student(30, "Jam"));

    // Printing the student name and marks with minimum marks as comparator is created for minimum marks top priority= Min marks
    cout << Sq.top().marks << " " << Sq.top().name << endl;

    sort(S.begin(), S.end(), StudentMarks());

    // For loop to terate over the elements in the vector array and we have to use Student instead of Int
    // As we have setup a vector of Student object instead of int/string/float...
    for (Student a : S)
    {
        cout << a.name << " " << a.marks << " " << endl;
    }

    return 0;
}
// Code Ends here