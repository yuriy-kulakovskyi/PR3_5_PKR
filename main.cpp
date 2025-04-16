#include <iostream>
#include <string>
#include "./functions/functions.h"

using namespace std;

int main() {
    string filename = "input.txt";
    Elem* initialStack = nullptr;

    // Читання файлу, виведення тексту та формування стеку
    printInputTextAndBuildStack(filename, &initialStack);

    cout << "Initial stack of first letters: ";
    printStack(initialStack);

    Elem* sortedStack = sortStack(initialStack);
    cout << "Sorted stack: ";
    printStack(sortedStack);

    return 0;
}
