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
	char prefix) {

	string result= " ";
	result[0] = prefix;

	RandomIt it1 = lower_bound(range_begin, range_end, result);

	++result [0];

	RandomIt it2 = lower_bound(range_begin, range_end, result);

	return std::make_pair(it1, it2);
}
