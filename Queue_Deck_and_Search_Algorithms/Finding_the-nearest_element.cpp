#include "pch.h"
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using std::set;
using std::lower_bound;

set<int>::const_iterator FindNearestElement(
	const set<int>& numbers,
	int border) {

	if (numbers.empty())
		return numbers.end();

	set<int>::const_iterator under;
	set<int>::const_iterator upper = numbers.lower_bound(border);

	under = prev(upper, 1);

	if (upper == numbers.end())
		return under;

	else if (under == numbers.end())
		return upper;

	if (*upper - border < border - *under)
		return upper;
	else
		return under;
}
