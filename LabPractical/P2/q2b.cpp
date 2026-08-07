#include <iostream>
using namespace std;

void callByReference(int *x) {
    *x = *x + 10;

    cout << "Value inside function: " << *x << endl;
}

int main() {
    int b=5;

    cout << "Value before function call: " << b << endl;

    callByReference(&b);

    cout << "Value after function call: " << b << endl;

    return 0;
}