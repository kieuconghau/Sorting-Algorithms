#include "ShakerSort.h"

void ShakerSort(int* a, int n) {
	for (int i = 0; i < n / 2; ++i) {
		// Heavy
		for (int j = i; j < n - 1 - i; ++j) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}

		// Light
		for (int j = n - 2 - i; j > i; --j) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
}

