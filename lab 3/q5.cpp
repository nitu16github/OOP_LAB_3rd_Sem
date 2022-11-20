#include <iostream>
#include <string.h>
using namespace std;

string sort_characters(string text) 
{
	bool flag;
	char ch;
	do
	{
		flag = false;

		for (int x = 0; x < text.length() - 1; x++)
		{
			if (text[x] > text[x + 1])
			{
				ch = text[x];
				text[x] = text[x + 1];
				text[x + 1] = ch;
				flag = true;
			}
		}
	} while (flag);
	string str;
	for (int y = 0; y < text.length(); y++)
	{
		if (text[y] != ' ')
		{
			str.push_back(text[y]);
		}
	}

	return str;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
	cout <<sort_characters(s) << endl;
	return 0;

}