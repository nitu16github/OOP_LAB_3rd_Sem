#include <iostream>
#include <string>

using namespace std;

string Longest_Word(string text) {

	string result_word, temp_str1;

	for (int x = 0; x < text.length(); x++)
	{
		if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) )
		{
			result_word.push_back(text[x]);
		}
		else
		{
			break;
		}
	}

   for (int x = 0; x < text.length(); x++)
	{
		if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) )
		{
			temp_str1.push_back(text[x]);

			if (x + 1 == text.length() && temp_str1.length() > result_word.length())
			{
				result_word = temp_str1;
			}
		}
		else
		{
			if (temp_str1.length() > result_word.length())
			{
				result_word = temp_str1;
			}

			temp_str1.clear();
		}
	}
  
	return result_word;
}

int main() {
	cout << "Original String: My name is Nitu Karmakar \nLongest word: " << Longest_Word("My name is Nitu Karmakar") << endl;

	return 0;
}