#include <iostream>
#include <stdio.h>

using namespace std;

string compress(string);

int main () {

/*
 * Question: Implement a method to perform basic string compression using the counts of repeated
 * 			 characters. For example, the string aabcccccaaa would become a2b1c5a3. If the
 * 			 "compressed" string would not become smaller than the original string, your method
 * 			 should return the original string. You can assume the string has only upper and
 * 			 lower case letters (a-z).
 *
 * Solution: Loop through string input, and check if [i+1] == [i]. If equal, increment repeat[i]
 * 			 because it is the same character (ie: aa).
 *
 * Complexity: As of now (return not implemented), complexity is O(n).
 */

	//string sample = "aabcccccaaa";
	string sample = "abeccfddcc";

	compress(sample);

}

string compress(string str) {
	//Look at [0]. check [1] and up to see until where repeat stops
	int repeat[str.length()];
	int count = 0;
	for (int i = 0; i < str.length(); i++)
		repeat[i] = 1;
	int i;
	int j;
	for (i = 0; i < str.length(); i++) {
		repeat[i] = 1;
		j = i;
		for (j = i + 1; j < str.length(); j++) {
			if (str[j] == str[i])
				repeat[i]++;
			else
				break;
		}
		//cout << str[i] << repeat[i];
		count++;
		i = j - 1;
	}

	//This part could probably be a little more efficient. Combined into function above.
	if (count > str.length())
		cout << str;
	else {
		//This print has bug. Not as accurate as one above.
		//To do: Above, store (using to_string) via concatenate to new string, then compare
		//and print that instead.
		for (i = 0; i < str.length(); i++)
			cout << str[i] << repeat[i];
	}
	cout << endl;

}

