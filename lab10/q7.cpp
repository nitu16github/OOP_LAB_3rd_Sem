#include <iostream>
#include <fstream>
using namespace std;

int main()

{
	fstream ob;

	ob.open("test.txt", ios::out);	

	ob << "oop lab\n";	

	ob << "this is my first file";

	ob.close();	

	ob.open("test.txt", ios:: in);	

	while (!ob.eof())

	{
		string str;

		ob >> str;	

		cout << str << "\n";	

	}

	ob.close();	

	return 0;

}