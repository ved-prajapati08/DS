#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 10;  // Modify the copied value
    cout << "Value inside function: " << x << endl;
}

int main() {
    int a=5;

    cout << "Original value before function call: " << a << endl;

    callByValue(a);

    cout << "Original value after function call: " << a << endl;

    return 0;
}