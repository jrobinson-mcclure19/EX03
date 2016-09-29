////////////////////////////////
// Jalen Robinson-McClure
// CS 172
// September 29th, 2016
// HW 3
///////////////////////////////

#include <iostream>
#include <string>

using namespace std;

string sort(string& s)
{
	bool organized = true;
	s.size();
	do
	{ 
		organized = true;
		for (int i = 0; i = s.size() - 1; i++)
		{
			if (s[i] > s[i + 1])
			{
				char temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
				organized = false;
			}
		}
	} while (!organized);
	return s;
}

int main()
{
	string input;
	cout << "enter a string: " << endl;
	cin >> input;
	cout << " The ordered string is " << sort(input) << endl;
}