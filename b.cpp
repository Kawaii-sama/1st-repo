#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the required size" << endl;
    cin >> size;

    int arr[size];
    int i;
    int item;
    int pos;

    cout << "Enter the " << size << " elements of the array" << endl;
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the item to be inserted" << endl;
    cin >> item;
    cout << "The item to be inserted is: " << item << endl;

    cout << "Enter the position for insertion" << endl;
    cin >> pos; 

    if (pos < 1 || pos > size + 1) {
        cout << "Invalid position for insertion." << endl;
        return 1; 
    }
for (int j = size - 1; j >= pos - 1; j--) {
        arr[j + 1] = arr[j];
    }

    arr[pos - 1] = item;
    size++;

    cout << "The required array is" << endl;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}