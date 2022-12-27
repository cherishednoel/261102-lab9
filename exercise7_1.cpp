#include <iostream>
using namespace std;

int main() {
    char g;
    cout << "Enter grade: ";
    cin >> g;

    switch(g) {
        case 'A':
            cout << "Awesome";
            break;
        case 'B':
            cout << "Great";
            break;
        case 'C':
            cout << "Good";
            break;
        case 'D':
            cout << "Noob";
            break;
        default:
            cout << "Errror: Invalid input";
    }
    return 0;
}