#include <iostream>
using namespace std;

int main() {
    int arr[], n;

    // Create Array
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Traversal
    cout << "\nArray elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Insertion (using index)
    int pos, value;
    cout << "\n\nEnter index to insert (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Deletion (using index)
    cout << "\n\nEnter index to delete (0 to " << n-1 << "): ";
    cin >> pos;

    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deletion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Search
    int key, found = 0;
    cout << "\n\nEnter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            found = 1;
            break;
        }
    }

    if(!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}