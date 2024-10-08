#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Type number: ";
    cin >> number;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
