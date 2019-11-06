#include "BinaryInsertionSort.h"

void BinaryInsertionSort(vector<int>& a) {
	int temp;
	int j;
	int k;

	for (int i = 1; i < a.size(); ++i) {
		temp = a[i];
		k = BinarySearch(a, temp, 0, i - 1);
		
		for (j = i - 1; j >= k; --j) {
			a[j + 1] = a[j];
		}

		a[k] = temp;
	}
}

int BinarySearch(vector<int> a, int key, int left, int right) {
	if (left >= right) {
		return (a[left] > key) ? left : left + 1;
	}
	
	int mid = (left + right) / 2;

	if (a[mid] == key) {
		return mid;
	}
	else if (a[mid] > key) {
		return BinarySearch(a, key, left, mid - 1);
	}
	else {
		return BinarySearch(a, key, mid + 1, right);
	}
}