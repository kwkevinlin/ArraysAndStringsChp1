#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void reverse (char*);

int main () {

/*
 * Question: Implement a function void reverse(char* str) in C or C++ which reverses a null-terminated string
 *
 * Solution: Find \0, then
 *		Method 1: Store reversed string in new array
 *		Method 2: Swap start and end until i > j (CTCI method)
 *
 * Complexity: O(n) for both methods
 */

	char sample[] = "Same string to reverse";

	reverse(sample);

}

void reverse (char *str) {
	int endString;
	int i = 0;
	//Find null terminator
	while(1) {
		if (str[i] == '\0') {
			endString = i;
			break;
		}
		i++;
	}

	//Method 2
	cout << "Method 1: Secondary Array\n";
	char temp[endString];
	int j = 0;
	for (int i = endString-1; i >= 0; i--) {
		temp[j] = str[i];
		j++;
	}
	cout << "Forward: " << str << endl;
	cout << "Reverse: " << temp << endl << endl;

	//Method 1:
	cout << "Method 2: Swapping\n";
	char tempC;
	j = endString-1;
	i = 0;
	while (i < j) {
		tempC = str[i];
		str[i] = str[j];
		str[j] = tempC;
		j--;
		i++;
	}

	cout << "Reverse: " << str << endl;

}

