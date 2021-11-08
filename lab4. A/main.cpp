#include <iostream>

using namespace std;

char* gets(char* s) {
	int a = getchar();
	int j;
	for (int i = 0; a != '\n'; i++) {
		s[i] = a;
		a = getchar();
		j = i;
	}
	s[j + 1] = '\0';
	return s;
}

int StrcmpWithTheSameNumberOfCharacter(char* str1, const char* str2) {
	int n;
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] == str2[i]) {
			n = 0;
		}
		else {
			if ((int)str1[i] > (int)str2[i]) {
				n = 1;
				break;
			}
			if ((int)str1[i] < (int)str2[i]) {
				n = -1;
				break;
			}
		}
	}
	return n;
}

int _strcmp(char* str1, const char* str2) {
	int k;
	if (strlen(str1) > strlen(str2)) {
		k = 1;
	}
	else {
		if (strlen(str1) < strlen(str2)) {
			k = -1;
		}
		else {
			k = StrcmpWithTheSameNumberOfCharacter(str1, str2);
		}
	}
	return k;
}

int main() {
	char str1[300];
	cout << "enret the string 1:" << endl;
	cout << gets(str1) << endl;
	char str2[300];
	cout << "enret the string 2:" << endl;
	cout << gets(str2) << endl;
	cout << _strcmp(str1, str2) << endl;
}
