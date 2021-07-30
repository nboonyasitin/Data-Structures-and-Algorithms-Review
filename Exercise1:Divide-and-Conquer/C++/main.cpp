#include <iostream>
int main() {
    int array[] = {7, 6, 1, 5, 4, 3};
    int arrayLength = sizeof(array)/sizeof(array[0]);
    std::cout << "Array length is: " << arrayLength;
    return(0);
}