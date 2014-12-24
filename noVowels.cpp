/***
Write a program that prompts the user to input a string. The
program then uses the function substr to remove all the vowels
from the string. For example, if str = "There", then after
removing all the vowels, str = "Thr". After removing all the
vowels, output the string. Your program must contain a function
to remove all the vowels and a function to determine whether a
character is a vowel.
***/

#include <iostream>
#include <string>

bool isVowel(char c) {
	switch (c) {
		case 'a': return true;
		case 'A': return true;
		case 'e': return true;
		case 'E': return true;
		case 'i': return true;
		case 'I': return true;
		case 'o': return true;
		case 'O': return true;
		case 'u': return true;
		case 'U': return true;
	}
	return false;
}

void remVowel(std::string *bef, std::string *aft) {
	for (std::string::iterator i = bef->begin(); i != bef->end(); i++) {
		if (!isVowel(*i)) {
			aft->push_back(*i);
		}
	}
}

int main() {
	std::string input;
	char c;
	std::cout << "This is the vowel-remover, please enter a string: " << std::endl;
	while ((c = getchar()) != '\n' && c != EOF) {
		input.push_back(c);
	}
	std::string output;
	remVowel(&input, &output);
	std::cout << std::endl;
	std::cout << "With vowels:   " << input << std::endl;
	std::cout << "Without:       " << output << std::endl;
	return 0;
}