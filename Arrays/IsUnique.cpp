#include <iostream>
#include <vector>
#include <string>
#include <iostream>


bool isUniqueChars(const std::string& str){
	if (str.length() == 0) return false;
	if (str.length() > 128) return false;
	// each position in the vector is a counter of each letter
	std::vector<bool> char_set(128);
	for (int i = 0; i < str.length(); i++){
		int val = str[i];
		if (char_set[val]){
			return false;
		}
		char_set[val] = true;
	}
	return true;
}


int main(){
	std::vector<std::string> words = {"abcde", "hello", " ", ""};
	for (auto word : words)
	{
		std::cout << word << std::string(": ") << std::boolalpha << isUniqueChars(word) << std::endl;
	}
	return 0;
}
