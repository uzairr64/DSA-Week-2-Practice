#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int last= num % 10;

    while (num >= 10) {
        num /= 10;
    }
    int first= num;

    int sum =first + last;

    cout << "Sum of first and last digit: " << sum;

    return 0;
}

