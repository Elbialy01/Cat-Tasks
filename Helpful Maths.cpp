// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	string s;
	multiset<int>m;
	cin >> s;
	int n = s.length();
	for (int i = 0;i < n;i++) {
		if (s[i] != '+')
			m.insert(s[i] - '0');
	}
	int count = 0;
	for (auto it : m) {
		count++;
		cout << it;
		if (count < m.size())
			cout << '+';
	}
		

}

