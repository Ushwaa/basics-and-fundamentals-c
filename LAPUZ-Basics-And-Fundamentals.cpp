#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int array1[MAX_SIZE], array2[MAX_SIZE], mergedArray[2 * MAX_SIZE];
    int size1, size2;

    cout << "Enter the number of elements for the first array (up to 10): ";
    cin >> size1;
    if (size1 > MAX_SIZE) {
        cout << "Size exceeds the maximum limit. Setting size to 10." << endl;
        size1 = MAX_SIZE;
    }
    cout << "Enter " << size1 << " elements for the first array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> array1[i];
    }

    cout << "Enter the number of elements for the second array (up to 10): ";
    cin >> size2;
    if (size2 > MAX_SIZE) {
        cout << "Size exceeds the maximum limit. Setting size to 10." << endl;
        size2 = MAX_SIZE;
    }
    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> array2[i];
    }

    int mergedSize = size1 + size2;
    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = array2[i];
    }

    for (int i = 0; i < mergedSize - 1; ++i) {
        for (int j = 0; j < mergedSize - i - 1; ++j) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                // Swap elements
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    cout << "Merged and sorted array in descending order: ";
    for (int i = 0; i < mergedSize; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}