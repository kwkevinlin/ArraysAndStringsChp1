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
 * Solution:
 *
 * Complexity:
 */

	string sample = "aabcccccaaa";

	compress(sample);

}

string compress(string str) {
	//Look at [0]. check [1] and up to see until where repeat stops
	int repeat[str.length()];
	for (int i = 0; i < str.length(); i++)
		repeat[i] = 1;
	int i;
	int j;
	for (i = 0; i < str.length(); i++) {
		repeat[i] = 1;
		j = i; // j = [0]
		for (j = i + 1; j < str.length(); j++) {
			//cout << "j: " << j << endl;
			if (str[j] == str[i])
				repeat[i]++;
			else
				break;
		}
		cout << str[i] << repeat[i];
		i = j - 1;
	}
	cout << endl;

	//work on return
}

