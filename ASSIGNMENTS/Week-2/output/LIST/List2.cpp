#include <iostream>
#include <list>

using namespace std;

int main()
{

    // Creating a list of integers
    list<int> nums;
    list<int> nums2;

    // Pushing elements in the list
    nums.push_back(10);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(100);

    // Pushing in List 2
    nums2.push_front(201);
    nums2.push_front(101);
    nums2.push_back(301);

    // Pop is to remove the elemnts from front or back
    nums.pop_back();     // deletes 100 from the list
    nums.pop_front();    // deletes 10 from the list
    nums.push_front(33); // push 33 on tp of the list
    nums.push_back(44);  // push 44 at the bottom of the list

    // inserting the elements at the begining/front/top of the list
    nums.insert(nums.begin(), 500);
    // inserting the elements at the last/bottom/end of the list
    nums.insert(nums.end(), 1000);

    // Swapping the elements in nums and nums2
    // nums.swap(nums2);

    // Iterator to iterte through the list
    list<int>::iterator it = nums.begin();

    // This while loop will iterate through the elements through the list
    while (it != nums.end())
    {
        cout << *it << " " << endl;
        // Iterator incrementation
        it++;
    }

    // empty() method is used to check if the list is empty or not
    if (nums.empty() == 1)
    {
        cout << "List is empty! " << endl;
    }
    else if (nums.empty() != 1)
    {
        nums2.swap(nums);
    }

    cout << endl
         << "After swapping the elements! " << endl;

    // clear method is used to empty the full list
    //        nums.clear();

    // erase() method is used to earse the values in the element from beign/start till end/last
    // nums.erase(nums.begin(), nums.end());

    // Another iterator to iterate over the values and print the elements
    list<int>::iterator nm = nums.begin();
    while (nm != nums.end())
    {
        cout << *nm << " " << endl;
        nm++;
    }
}