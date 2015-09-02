#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
/*
 * Question: Given two strings, write a method to determine if one is a permutation of the other
 *
 * Solution: With i = [0] and j = [str.length()], check if i == j then increment i and decrement j
 * 			 If i != j for any index, then the two strings are not a permutation of the other
 *
 * Complexity: O(n) due to the single while loop
 */

	string string1 = "garyliou";
	string string2 = "uoilyrag";
	//string string2 = "notpermu"; //This one is not a permutation -- for verifying

	if (string1.length() != string2.length())
		cout << "Not a permutation";

	int flag = 0;
	int start = 0;
	int end = string1.length() - 1;
	while(1) {
		if (start > string1.length() - 1)
			break;
		else {
			if (string1[start] != string2[end]) {
				cout << "Different, str1: " << string1[start] << ", str2: " << string2[end] << endl;
				cout << "Not a permutation";
				flag = 1;
				break;
			}
			else
				cout << "Match,     str1: " << string1[start] << ", str2: " << string2[end] << endl;
			start++;
			end--;
		}
	}

	if (flag == 0)
		cout << "\nPairing is a permutation of one another";

}


