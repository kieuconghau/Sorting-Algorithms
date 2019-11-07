#include "Support.h"

bool isAscending(vector<int> a) {
	for (int i = 1; i < a.size(); ++i) {
		if (a[i] < a[i - 1]) {
			return false;
		}
	}
	return true;
}