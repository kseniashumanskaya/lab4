#include <iostream>

using namespace std;

char* gets(char* s) {
	int a = getchar();
	int i;
	for (i = 0; a != '\n'; i++) {
		s[i] = a;
		a = getchar();
	}
	s[i]='\0';
	return s;
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
			for (int i = 0; i < strlen(str1); i++) {
				if (str1[i] == str2[i]) {
					k = 0;
				}
				else {
					if ((int)str1[i] > (int)str2[i]) {
						k = 1;
						break;
					}
					if ((int)str1[i] < (int)str2[i]) {
						k = -1;
						break;
					}
				}
			}
		}
	}
	return k;
}

int main () {
	
	char str1[300];
    cout << "enter the string 1:" << endl;	
	cout << gets(str1) << endl;

	char str2[300];
	cout << "enter the string 2:" << endl;
	cout << gets(str2) << endl;

	cout << _strcmp(str1, str2) << endl;	
}

