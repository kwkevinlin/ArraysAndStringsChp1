#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

/*
 * Detailed write-up please visit:
 * 		http://linkevin.me/replacing-space-with-in-string
 *
 * Question: Write a method to replace all spaces in a string with '%20'. You may assume that the
 * 			 string has sufficient space at the end of the string to hold the additional characters,
 * 			 and that you are given the "true" length of the string
 *
 * Solution: Please visit: http://linkevin.me/replacing-space-with-in-string
 *
 * Complexity: O(n) due to the for loop
 *
 */
    string str = "hello world this is an example.";
    string strF, strB;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            strF = str.substr(0, i);
            cout << "strF: " << strF << " ";
            strB = str.substr(i + 1, str.length() - (i + 1));
            cout << "     strB: " << strB << endl;
            str = strF + "%20";
            str = str + strB;
        }
    }
    cout << "\nSolution: \n" << str << endl;
}
