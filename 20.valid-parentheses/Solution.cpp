#include "Solution.h"

/*
	Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

	An input string is valid if:

	Open brackets must be closed by the same type of brackets.
	Open brackets must be closed in the correct order.
	Note that an empty string is also considered valid.

	Example 1:
	Input: "()"
	Output: true

	Example 2:
	Input: "()[]{}"
	Output: true

	Example 3:
	Input: "(]"
	Output: false

	Example 4:
	Input: "([)]"
	Output: false

	Example 5:
	Input: "{[]}"
	Output: true
*/

bool Solution::isValid(string s) {
	bool valid = true;

	map<char, char> charsMap = {
		{ '(', ')' },
		{ '[', ']' },
		{ '{', '}' }
	};

	stack<char> charsStack;

	for (auto& currentChar : s) {
		if (charsMap.find(currentChar) != charsMap.end()) {
			charsStack.push(currentChar);
		}
		else {
			char poppedChar = charsStack.top();
			charsStack.pop();

			if (currentChar != charsMap[poppedChar]) {
				valid = false;
				break;
			}
		}
	}

	if (charsStack.size() != 0) {
		valid = false;
	}

	return valid;
}
