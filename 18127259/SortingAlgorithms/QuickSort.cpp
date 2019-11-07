#include "QuickSort.h"

void QuickSort(vector<int>& a) {
	if (a.size() > 1) {
		QuickSort(a, 0, a.size() - 1);
	}
}

void QuickSort(vector<int>& a, int left, int right) {
	if (left < right) {
		int p = Partition(a, left, right);
		QuickSort(a, left, p - 1);
		QuickSort(a, p + 1, right);
	}
}

int Partition(vector<int>& a, int left, int right) {
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