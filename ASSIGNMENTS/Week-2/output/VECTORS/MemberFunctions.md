# Member Functions in Vectors

-   v.beign() : It points to the first element in the vector array
-   v.end() : it points to the last element in the vector array
-   v.push_back() : Add/insert elements in the vector
-   v.pop_back : Remove/Delete elements from the vector
-   v.size() : Prints the size of the Vector
-   v.front() : Points at the first element
-   v.back() : points at the last elment
-   v.empty() : Checks if the vector is empty
-   operator[] : use only when there is a value assigned to the vector, it will throw error if the vector is empty
-   at(size_type n) : Accesses the elements at sepecfied index with bounds checking
-   v.capacity() : To check the maximum capacity of the vector can store at that moment
-   reserve(size_type n) : It helps us reserve/allocate the vector with n number of blocks v.reserve(10) = The vector capacity = 10 now
-   v.max_size() : It will print the maximum size my system will allow me to store elements in the vector
-   v.clear()  : 
-   inser() : Inserts elements at given index