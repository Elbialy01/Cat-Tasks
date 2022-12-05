#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <map>

#define ll long long
using namespace std;


int main()
{
	string s;
	cin >> s;
	int counter = 0;
	while (s.length()>1) {
		int n = s.length();
		int sum = 0;
		for (int i = 0;i < n;i++) {
			int y = s[i] - '0';
			sum += y;
		}
		s = to_string(sum);
		counter++;
	}

	cout << counter;
	}
