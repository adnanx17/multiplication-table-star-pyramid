#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number;
    int height;

    cout << "Enter a number for the multiplication table: ";
    cin >> number;

    cout << "\nMultiplication Table of " << number << "\n";
    cout << "---------------------------\n";

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 1; j++) {
            cout << setw(4) << number
                 << " x " << setw(2) << i
                 << " = " << setw(5) << number * i << '\n';
        }
    }

    
    cout << "\nEnter the height of the star pyramid: ";
    cin >> height;

    cout << "\nStar Pyramid\n";
    cout << "------------\n";

    if (height <= 0) {
        cout << "Height must be greater than 0.\n";
        return 0;
    }

    for (int i = 1; i <= height; i++) {

        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << '\n';
    }

    return 0;
}