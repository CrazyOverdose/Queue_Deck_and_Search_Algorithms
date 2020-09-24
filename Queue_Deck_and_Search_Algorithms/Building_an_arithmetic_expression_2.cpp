#include "pch.h"
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>


using std::list;
using std::string;
using std::cin;
using std::cout;

bool operator < (const string& c, const char& b) {
	char a = c[0];

	if ((b == '*' || b == '/') && (a == '+' || a == '-'))
		return true;

	return false;
}

int main() {
	string x, line;
	int N;

	std::cin >> x >> N;

	list <string> data;
	cin.ignore();

	data.push_back(x);

	string operation_sign = "*";

	for (size_t i = 0; i < N; ++i) {
		getline(cin, line);

		if (operation_sign < line[0]) {
			data.push_back(")");
			data.push_front("(");
		}

		operation_sign = line[0];
		data.push_back(" " + line);
	}

	copy(data.begin(), data.end(), std::ostream_iterator<string>(std::cout, ""));
}