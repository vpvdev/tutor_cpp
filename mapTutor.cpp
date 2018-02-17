#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int,char> m;
	string s;
	cout << "enter the string:";
	getline(cin,s);
	
	for(int i =0; s[i] != '\0'; i++)
	{
		m[i+5] = s[i];
	}
	for(map<int,char>::iterator it = m.begin(); it != m.end() ; it++)
	{
		cout << it->first << "\t" << it->second << endl;
	}
	
	return 0;
	
}
