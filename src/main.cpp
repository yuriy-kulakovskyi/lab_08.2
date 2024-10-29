#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "../include/main.h"

using namespace std;

int main() {
    char s[101];
    cout << "Enter your string:" << endl;
    cin.getline(s, 151);

    int count = FindWords(s);

    cout << "Count of words that have same symbols at the start and in the end is: " << count << endl;

    return 0;
}
