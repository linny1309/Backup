//Final Part 3 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string characterCount(string line)
{
	string fin = "";

	for (int x = 0; x < line.length(); x++)
	{
		string sub0 = "";
		if (x > 0)
			sub0 = line.substr(x - 1, 1);
		string sub = line.substr(x, 1);
		if (sub == "a" && sub0 == " ")
			fin += "A";
		else
			fin += line.substr(x, 1);


	}
	return fin;
}


int main()
{
	ifstream text("input.txt");

	string line;
	string fin = "";
	int num = 0;
	ofstream file;
	file.open("textoutput.txt");

	if (text.is_open() && file.is_open())
	{
	 fin = "";
		while (getline(text, line))
		{
			cout << line << '\n';
			file << line << '\n';
			fin += characterCount(line);
		}
		text.close();
	}

	else cout << "Unable to open file";

	file << fin;

	system("pause");

	return 0;
}