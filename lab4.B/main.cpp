#include <iostream>
using namespace std;

char* gets(char* s) {
	int a = getchar();
	int i;
	for (i = 0; a != '\n'; i++) {
		s[i] = a;
		a = getchar();
	}
	s[i] = ' ';
	s[i+1] = '\0';

	return s;
}

int TheNumberOfWords(char* str) {
	int TheNumberOfWords = 0;
	for (int i = 0; i < strlen(str); i++) {
		if ((int)str[i] == 32) {
			TheNumberOfWords++;
		}
	}
	return TheNumberOfWords;
}

int main() {
	char str[300];
	cout << "enret the string :" << endl;
	cout << gets(str) << endl;
	int j = -1;
	int TheNumberOfDegitsInAWord = 0;
	int TheNumberOfCharactersInAWord = 0;
	char str1[300];
	char str2[300];
	int i1 = 0;
	int i2 = 0;
	for (int r = 0; r < TheNumberOfWords(str); r++) {
		for (int i = j + 1; str[i] != ' '; i++) {
			TheNumberOfCharactersInAWord++;
			if (((int)str[i] < 58) && ((int)str[i] > 47)) {
				TheNumberOfDegitsInAWord++;
			}			
			j = i + 1;
		}

		if (TheNumberOfCharactersInAWord == TheNumberOfDegitsInAWord) {
			for (int j1 = j - TheNumberOfCharactersInAWord; j1 < j + 1 ; j1++) {
				str1[i1] = str[j1];
				i1++;			
			}		
		}

		else {
			for (int j2 = j - TheNumberOfCharactersInAWord; j2 < j + 1; j2++) {
				str2[i2] = str[j2];
				i2++;
			}
		}
		TheNumberOfCharactersInAWord = 0;
		TheNumberOfDegitsInAWord = 0;
	}
	str1[i1 + 1] = '\0';
	str2[i2 + 1] = '\0';
	char str3[300];
	int i3;
	for (i3 = 0; i3 < i1; i3++) {
		str3[i3] = str1[i3];
	}
	int k1 = 0;
	for (i3 = i1; i3 < i1 + i2; i3++) {
		str3[i3] = str2[k1];
		k1++;
	}
	for (int i = 0; i < i3; i++) {
		cout << str3[i];
	}
}