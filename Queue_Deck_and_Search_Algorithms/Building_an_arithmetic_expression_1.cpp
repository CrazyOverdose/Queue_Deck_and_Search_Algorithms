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


int main() {
	string x, line;
	int N;

	std::cin >> x >> N;

	list <string> data;
	cin.ignore();

	data.push_back(x);

	for (size_t i = 0; i < N; ++i) {
		getline(cin, line);

		data.push_back(") ");
		data.push_front("(");
		data.push_back(line);
	}

	copy(data.begin(), data.end(), std::ostream_iterator<string>(std::cout, ""));
}