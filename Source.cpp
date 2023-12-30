#include <iostream>
#include <iomanip>

const int ARRAY_SIZE = 5;

void inputArray(int arr[], int size) {
    std::cout << "Enter " << size << " values for the array:\n" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": " << std::endl;
        std::cin >> arr[i];
    }
}

void printArray(const int arr[], int size) {
    std::cout << "Array: " << std::endl;
    for (int i = 0; i < size; ++i) {
       std::cout << std::setw(5) << arr[i] << ' ' ;
    }
    std::cout << std::endl;
}

template <typename T>
void inputArrayTemplate(T arr[], int size) {
    std::cout << "Enter " << size << " values for the array:\n" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": " << std::endl;
        std::cin >> arr[i];
    }
}

template <typename T>
void printArrayTemplate(const T arr[], int size) {
    std::cout << "Array: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << std::setw(5) << arr[i] << ' ' ;
    }
    std::cout << std::endl;
}

int main() {
    int myArray[ARRAY_SIZE];

    inputArray(myArray, ARRAY_SIZE);

    printArray(myArray, ARRAY_SIZE);

    inputArrayTemplate(myArray, ARRAY_SIZE);

    printArrayTemplate(myArray, ARRAY_SIZE);

    return 0;
}
