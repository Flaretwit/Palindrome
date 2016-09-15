#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<array>

main() {
	array<char, 81> input;

	cout << "Enter in your input";

	cin >> input;

	for(int i = 0; i < input.size(); i++) {
		if(!isalpha(input[i])) {
			//if a character is found to not be alphanumeric, then it overwrites
			//it by copying over the remaining part of the array
			for(int j = i+1; j < input.size(); j++) {
				input[j-1] = input[j];
				cout << "working";
			}
		}
	}
}

