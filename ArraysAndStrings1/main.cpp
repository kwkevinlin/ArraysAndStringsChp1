#include <iostream>
#include <stdio.h>

using namespace std;

int main () {

	/*
	 * Question: Implement an algorithm to determine if a string has all unique characters.
	 * 			 What if you cannot use additional data structures?
	 *
	 * Solution: Hash character ASCII index to corresponding location in array. ie: if character = 'a',
	 * 			 'a' = 97 in ASCII, so arr[97]++;
	 * 			 If [any index] > 1, then break and cout. There is a repeat in the string.
	 *
	 * Complexity: O(n) due to the for loop
	 */

	string sample = "abcdefghijklmnopqrstuwxyz"; //All unique
	//string sample = "Do I have all unique characters?"; //'a' first repeat occurrence

	bool status = false;

	//Non-extended ASCII has 128 entries
	int asciiHash[128] = {0};

	for (int i = 0; i < sample.length(); i++) {
		//ASCII value into index
		int index = int(sample[i]);
		//cout << index << ", i = " << i << "\n";
		if (asciiHash[index] == 1 && index != 32) { //Ignore space = 32
			cout << "Contains repeating\n"
					"Repeat: " << sample[i];
			status = true;
			break;
		} else
			asciiHash[index] = 1;
	}

	if (status == false)
		cout << "No repeating characters\n";

}
