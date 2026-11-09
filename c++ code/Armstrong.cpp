
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, digit, sum = 0, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    int x = n;

    // Count number of digits
    while (x > 0) {
        count++;
        x = x / 10;
    }

    // Calculate Armstrong sum
    x = n;

    while (x > 0) {
        digit = x % 10;
        sum += pow(digit, count);
        x = x / 10;
    }

    if (sum == temp)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
