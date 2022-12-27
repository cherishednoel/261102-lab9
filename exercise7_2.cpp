#include <iostream>
using namespace std;

void pTu(int face, int personal) {
    if(face < 50) {
        if(personal < 50) cout << "Unfriend";
        if(personal >= 50) cout << "Friend";
    }
    if(face >= 50 && face < 80) {
        if(personal < 50) cout << "One-night-stand";
        if(personal >= 50) cout << "Friend";
    }
    if(face >= 80) {
        if(personal < 50) cout << "One-night-stand";
        if(personal >= 50) cout << "Girlfiend";
    }
}

int main() {
    pTu(100, 100);
    return 0;
}