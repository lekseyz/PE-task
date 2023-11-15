#include "include/bin_search.hpp"
#include <iostream>


int main(void) {
    using std::cout;

    int* arr = new int[5] {1, 2, 3, 4, 5};
    int* found = binSearch(arr, 5, 5);

    if(found != nullptr)
        cout << *found << "\n";

    std::size_t size = 12;
    arr = new int[size] {1, 3, 4, 7, 8, 12, 19, 26, 34, 40};

    //tests
    
}