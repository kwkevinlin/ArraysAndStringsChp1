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
 * Complexity: If string concatenation is O(n^2) complexity, then this solution -- limited by
 * 			   string concatenation, will also be O(n^2).
 *
 * Notice:   This solution requires C++11. Line 66: to_string()
 */

	string sample = "aabcccccaaa";
	//string sample = "abeccfddcc";
	//string sample = "abc";

	string result = compress(sample);

	cout << result;

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
		//For every distinct letter
		count++;
		i = j - 1;
	}
	string temp;
	string toReturn;
	//This part could probably be a little more efficient. Combined into function above.
	if (str.length() < count*2) { //Every letter (count) has 2 elements: "c2" (char and repeats)
		cout << "Returning original string:\n";
		return str;
	}
	else {
		for (i = 0; i < str.length(); i++) {
			temp = str[i] + to_string(repeat[i]);
			toReturn = toReturn + temp;
			cout << str[i] << repeat[i];
			//if (repeat[i] > 1) //To print
			//	i = i + repeat[i]-1; //Same as i = j - 1 above, so ie: c3 and not c1 c1 c1
		}
		cout << endl;
		return toReturn;
	}

}

