// COMSC-210 | Lab 7 | Quang Ngo
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5;

string* reverseArray(string*);
void displayArray(string*);

int main() {
    return 0;
}

string* reverseArray(string* defaultArray) {
    for(int i = 0; i < SIZE/2; i++) {
        string tempNum = *(defaultArray + i);
        *(defaultArray + i) = *(defaultArray + ((SIZE - 1) - i));
        *(defaultArray + ((SIZE - 1) - i)) = tempNum;
    }
    return defaultArray;
}

