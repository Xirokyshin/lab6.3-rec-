#include <iostream>

using namespace std;

void reverseArray(int arr[], int size) {

    if (size <= 1) {
        return;
    }

    // Міняємо місцями перший і останній елементи
    swap(arr[0], arr[size - 1]);

    // Рекурсивний виклик для підмасиву
    reverseArray(arr + 1, size - 2);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Perevernutiy: ";
    printArray(arr, size);

    return 0;
}
