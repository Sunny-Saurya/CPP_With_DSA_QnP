// Merging of two array into one array

// <algorithm>

#include <iostream>
using namespace std;

int main() {

    int arr1[] = {1, 2, 3};

    int arr2[] = {4, 5, 6};

    int mergedArr[6];


    std::copy(arr1, arr1 + 3, mergedArr);  // beginning element, last element, copied_location

    std::copy(arr2, arr2 + 3, mergedArr + 3);


    for (int i = 0; i < 6; i++) {

        std::cout << mergedArr[i] << " ";

    }

    std::cout << std::endl;


    return 0;

}