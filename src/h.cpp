#include "../include/main.h"
#include <iostream>


int FindWords(const char* s) {
	int k = 0;
	bool inWord = false;
	int wordStart = 0;

	for (int i = 0; i <= strlen(s); i++) {
		if (s[i] != ' ' && s[i] != '\0') {
			if (!inWord) {
				inWord = true;
				wordStart = i;
			}
		} else {
			if (inWord) {
				inWord = false;
				if (s[wordStart] == s[i - 1]) {
					k++;
				}
			}
		}
	}

	return k;
}