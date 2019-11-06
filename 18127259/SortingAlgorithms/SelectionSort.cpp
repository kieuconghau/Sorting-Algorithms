#include "SelectionSort.h"

void SelectionSort(vector<int>& a) {
	vector<int>::iterator min;

	for (vector<int>::iterator i = a.begin(); i != a.end() - 1; ++i) {
		min = i;	// Select i as the minimum value (till i = a.end() - 1)

		// Find the minimum value in the remaning part of this array (from i + 1 to end)
		for (vector<int>::iterator j = i + 1; j != a.end(); ++j) {
			if (*j < *min) {
				min = j;
			}
		}

		swap(*min, *i);		// Exchange the minimum value which we have found above with the value at i.
	}
}