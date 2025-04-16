#include "functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

Elem* push(Elem* top, Info value) {
  Elem* tmp = new Elem;
  tmp->info = value;
  tmp->link = top;
  top = tmp;
  return top;
}

Elem* pop(Elem* top, Info& value) {
  if (top == nullptr) {
    cerr << "The stack is empty" << endl;
    return nullptr;
  }
  Elem* tmp = top->link;
  value = top->info;
  delete top;
  return tmp;
}

void printInputTextAndBuildStack(const string& filename, Elem** stack) {
  ifstream inFile(filename);
  if (!inFile) {
    cerr << "Unable to open file " << filename << endl;
    exit(1);
  }
  cout << "Input text:" << endl;
  string line;
  while (getline(inFile, line)) {
    cout << line << endl; // Виведення рядка
    istringstream iss(line);
    string word;
    while (iss >> word) {
      if (!word.empty()) {
        (*stack) = push(*stack, word[0]);
      }
    }
  }
  inFile.close();
}

void printStack(Elem* top) {
  if (top == nullptr) {
    cout << "The stack is empty" << endl;
    return;
  }
  Elem* tmp = top;
  while (tmp != nullptr) {
    cout << tmp->info << " ";
    tmp = tmp->link;
  }
  cout << endl;
}

Elem* reverseStack(Elem* stack) {
  Elem* reversed = nullptr;
  while (stack != nullptr) {
    char value;
    stack = pop(stack, value);
    reversed = push(reversed, value);
  }
  return reversed;
}

Elem* sortStack(Elem* original) {
  Elem* sorted = nullptr;
  while (original != nullptr) {
    char temp;
    original = pop(original, temp);
    while (sorted != nullptr && sorted->info > temp) {
      char movedChar;
      sorted = pop(sorted, movedChar);
      original = push(original, movedChar);
    }
    sorted = push(sorted, temp);
  }
  return reverseStack(sorted);
}