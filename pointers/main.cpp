#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 10;
    cout << *ptr << endl;

    return 0;
}