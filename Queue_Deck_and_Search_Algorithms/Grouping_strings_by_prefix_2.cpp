#include "pch.h"
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <utility> 
#include <algorithm>

using std::pair;
using std::lower_bound;
using std::upper_bound;

using namespace std;

template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith(
	RandomIt range_begin, RandomIt range_end,
	const string& prefix) {

	string alphabet = "abcdefghijklmnopqrstuvwxyz";


	if (prefix.empty())
		return std::make_pair(range_begin, range_begin);

	RandomIt it1 = lower_bound(range_begin, range_end, prefix);

	string result = prefix;
	result[result.size()-1] = ++result[result.size()-1];


	RandomIt it2 = lower_bound(range_begin, range_end, result);
	return std::make_pair(it1, it2);
}
