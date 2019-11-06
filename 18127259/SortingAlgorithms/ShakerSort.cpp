#include "ShakerSort.h"

void ShakerSort(vector<int>& a) {
	for (int i = 0; i < a.size() / 2; ++i) {
		// Heavy
		for (int j = i; j < a.size() - 1 - i; ++j) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}

		// Light
		for (int j = a.size() - 2 - i; j > i; --j) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
}