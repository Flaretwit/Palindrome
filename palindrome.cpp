#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include <cctype>
#include <cstring>

using namespace std;
int main() {
	char input[81];
	bool isValid = true;
	int len = 0;
	cout << "Enter in your input: \n";
	cin >> input;
	len = strlen(input);
	//Discards punctuation
	for(int i = 0; i < len; i++) {
		if(!isalpha(input[i]) && !isdigit(input[i])) { 
			//if a character is found to not be alphanumeric, then it overwrites
			//it by copying over the remaining part of the array
			for(int j = i+1; j < len; j++) {
				//each element in the array is replaced by the one to its right, starting with the
				//index whose element was not alphanumeric.
				input[j-1] = input[j];				
			}
			//reduces the variable length by one to avoid checking it (just ditching it for now).
			len = len -1;
		}
	}
	//now runs through the array comparing the very front to the very back
	//and moving inwards. Sets a variable to false to indicate the input is not a palindrome
	for(int i = 0; i < len; i++) {
		if(input[i] != input[len-1 - i]) {
			isValid = false;
		}
	}
	//outputs
	if(isValid) {
		cout << "Palindrome";
	}

	else {
		cout << "Not a Palindrome";
	}

	return 0;
}

