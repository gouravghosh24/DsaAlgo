
    // Creating a vector of integers
    vector<int> vec = {10, 20, 30, 40, 50};

    // 1. begin(): Returns an iterator pointing to the first element in the vector
    cout << "First element using begin(): " << *vec.begin() << endl;

    // 2. end(): Returns an iterator pointing to the position just after the last element in the vector
    cout << "Element after last using end()-1: " << *(vec.end() - 1) << endl;

    // 3. size(): Returns the number of elements in the vector
    cout << "Size of vector: " << vec.size() << endl;

    // 4. empty(): Checks if the vector is empty
    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // 5. capacity(): Returns the number of elements that the vector can hold before needing to allocate more space
    cout << "Capacity of vector: " << vec.capacity() << endl;

    // 6. reserve(size_type n): Requests that the vector capacity be increased to at least n elements
    vec.reserve(10);
    cout << "Capacity after reserve(10): " << vec.capacity() << endl;

    // 7. max_size(): Returns the maximum number of elements that the vector can hold due to system or library limitations
    cout << "Max size of vector: " << vec.max_size() << endl;

    // 8. front(): Accesses the first element in the vector
    cout << "First element using front(): " << vec.front() << endl;

    // 9. back(): Accesses the last element in the vector
    cout << "Last element using back(): " << vec.back() << endl;

    // 10. operator[](size_type n): Accesses the element at the specified index without bounds checking
    cout << "Element at index 2 using operator[]: " << vec[2] << endl;

    // 11. at(size_type n): Accesses the element at the specified index with bounds checking
    cout << "Element at index 2 using at(): " << vec.at(2) << endl;

    // 12. push_back(const T& value): Adds an element to the end of the vector
    vec.push_back(60);
    cout << "Element added using push_back(60): " << vec.back() << endl;

    // 13. pop_back(): Removes the last element from the vector
    vec.pop_back();
    cout << "Last element after pop_back(): " << vec.back() << endl;

    // 14. insert(iterator position, const T& value): Inserts a new element before the specified position in the vector
    vec.insert(vec.begin() + 2, 25);
    cout << "Element inserted at index 2 using insert(): " << vec[2] << endl;

    // 15. erase(iterator position): Removes one or more elements from the vector starting at the specified position
    vec.erase(vec.begin() + 2);
    cout << "Element at index 2 after erase(): " << vec[2] << endl;

    // 16. clear(): Removes all elements from the vector, which are destroyed, and leaves it with a size of 0
    vec.clear();
    cout << "Size after clear(): " << vec.size() << endl;

    // 17. swap(vector& x): Swaps the contents of the vector with those of another vector of the same type, including their sizes and capacities
    vector<int> vec2 = {100, 200, 300};
    vec.swap(vec2);
    cout << "First element after swap(): " << vec.front() << endl;

