#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        cout << "Memory Allocation Failed";
        return 0;
    }

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout << "Array in reverse order:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }

    free(arr);

    return 0;
}