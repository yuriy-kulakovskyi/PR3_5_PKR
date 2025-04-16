#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>

using namespace std;

typedef char Info;
struct Elem {
  Elem* link;
  Info info;
};

Elem* push(Elem* top, Info value);
Elem* pop(Elem* top, Info& value);
void printInputTextAndBuildStack(const string& filename, Elem** stack);
void printStack(Elem* top);
Elem* reverseStack(Elem* stack);
Elem* sortStack(Elem* stack);

#endif //FUNCTIONS_H