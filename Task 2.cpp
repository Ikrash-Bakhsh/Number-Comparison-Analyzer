#include<iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter Second number: ";
    cin >> b;
    cout << "Enter Third number: ";
    cin >> c;
    cout << "Enter Fourth number: ";
    cin >> d;

    if (a > b) {
        if (a > c) {
            if (a > d) {
                cout << "The First number is greater\n";
            } else {
                cout << "The Fourth number is greater\n";
            }
        } else {
            cout << "The Third number is greater\n";
        }
    } else {
        if (b > c) {
            if (b > d) {
                cout << "The Second number is greater\n";
            } else {
                cout << "The Fourth number is greater\n";
            }
        } else {
            cout << "The Third number is greater\n";
        }
    }

    if (a < b) {
        if (a < c) {
            if (a < d) {
                cout << "The First number is smaller\n";
            } else {
                cout << "The Fourth number is smaller\n";
            }
        } else {
            cout << "The Third number is smaller\n";
        }
    } else {
        if (b < c) {
            if (b < d) {
                cout << "The Second number is smaller\n";
            } else {
                cout << "The Fourth number is smaller\n";
            }
        } else {
            cout << "The Third number is smaller\n";
        }
    }

    return 0;
}

