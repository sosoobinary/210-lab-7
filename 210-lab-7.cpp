// COMSC-210 | Lab 7 | Quang Ngo
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5;

string* reverseArray(string*);
void displayArray(string*);

int main() {
    string* nameArray = new string[SIZE];

    *(nameArray + 0) = "Janet";
    *(nameArray + 1) = "Jeffe";
    *(nameArray + 2) = "Jin";
    *(nameArray + 3) = "Joe";
    *(nameArray + 4) = "Junio";
    
    cout << "Original array: ";
    displayArray(nameArray);

    reverseArray(nameArray);
    cout << "Reversed array: ";
    displayArray(nameArray);

    delete [] nameArray;

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

void displayArray(string* defaultArray) {
    for(int i = 0; i < SIZE; i++) {
        cout << *(defaultArray + i) << " ";
    }
    cout << endl;
}