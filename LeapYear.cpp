#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    // A year is a leap year if:
    // 1. It is divisible by 4, but not divisible by 100
    // 2. Or, it is divisible by 400
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0)
            return true;
    }
    return false;
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
