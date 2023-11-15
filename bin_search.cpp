#include "include/bin_search.hpp"

int* binSearch(int* arr, std::size_t len, int val) {    
    std::size_t l = 0, r = len;

    while(l < r) {
        std::size_t mid = l + (r - l) / 2;

        if(arr[mid] < val) {
            l = mid;
        }
        else if(arr[mid] > val) {
            r = mid;
        }
        else 
            return arr + mid;
    }

    return nullptr;
}