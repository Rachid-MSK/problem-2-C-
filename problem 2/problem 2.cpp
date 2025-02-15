// problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enumPrimeNotPrime { Prime = 1, NotPrime = 2 };
int getPositifNumber(string NumText) {
    int N;
    cout << NumText << endl;
    cin >> N;
    if (N > 1)
        return N;
    else
        return -1;
}

enumPrimeNotPrime checkPrimeNumber(int Number) {
    int M = round(Number / 2);
    for (int counter = 1; counter <= M; counter++) {
        if (M % 2 == 0)
            return enumPrimeNotPrime::NotPrime;
    }
    return enumPrimeNotPrime::Prime;
}

void printPrimeNumbersFrom1toN(int Number) {
    cout << "\n";
    cout << "Print Prime Numbers from " << 1 << " to " << Number << endl;
    cout << "Are; " << endl;
    for (int i = 1; i <= Number; i++) {
        if (checkPrimeNumber(i) == enumPrimeNotPrime::Prime) {
            cout << i << endl;
        }
    }
}


int main()
{

    printPrimeNumbersFrom1toN(getPositifNumber("Hello please enter your prefered Number here:"));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
