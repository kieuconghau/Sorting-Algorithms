#include "QuickSort.h"

void QuickSort(vector<int>& a, bool random_mode) {
	if (a.size() > 1) {
		QuickSort(a, 0, a.size() - 1, random_mode);
	}
}

void QuickSort(vector<int>& a, int left, int right, bool random_mode) {
	if (left < right) {
		int p = Partition(a, left, right, random_mode);
		QuickSort(a, left, p - 1, random_mode);
		QuickSort(a, p + 1, right, random_mode);
	}
}

int Partition(vector<int>& a, int left, int right, bool random_mode) {
	if (random_mode) {
		srand((size_t)time(nullptr));
		int random_index = rand() % (right - left + 1) + left;
		swap(a[left], a[random_index]);
	}

	int pivot = a[left];
	int i = left + 1;
	int j = right;

	do {
		while (i <= right && a[i] < pivot) {	// a[i] < pivot && i <= right -> out of range subscript
			++i;
		}

		while (j > left && a[j] >= pivot) {
			--j;
		}

		if (i < j) {
			swap(a[i], a[j]);
		}
		
	} while (i < j);	// Fun fact: i will never equal j

	swap(a[j], a[left]);
	
	return j;
}