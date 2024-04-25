#include <iostream>

using namespace std;


int main() {
    // Declare a 2D array with 3 rows and 4 columns.
    int arr[3][4];

    // Initialize the elements of the array.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = i * 4 + j + 1;
        }
    }

    // Access and print individual elements using subscripts.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << std::endl;
        }
    }

    return 0;
}
