#include "Support.h"

// Check if an array is in ascending order.
bool IsAscending(vector<int> a) {
	for (int i = 1; i < a.size(); ++i) {
		if (a[i] < a[i - 1]) {
			return false;
		}
	}
	return true;
}

// Print an array.
void Display(vector<int> a) {
	for (int i = 0; i < a.size(); ++i) {
		cout << " " << a[i];
	}
	cout << endl;
}