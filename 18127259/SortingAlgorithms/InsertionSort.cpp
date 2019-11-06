#include "InsertionSort.h"

void InsertionSort(vector<int>& a) {
	int temp;
	int j;

	for (int i = 1; i < a.size(); ++i) {
		temp = a[i];

		for (j = i - 1; j >= 0; --j) {
			if (a[j] > temp) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
		}

		a[j + 1] = temp;
	}
}