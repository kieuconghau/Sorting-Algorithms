#include "MergeSort.h"

void MergeSort(vector<int>& a) {
	if (a.size() > 1) {
		MergeSort(a, 0, a.size() - 1);
	}
}

void MergeSort(vector<int>& a, int left, int right) {
	if (left < right) {
		// Split
		int mid = left + (right - left) / 2;
		MergeSort(a, left, mid);
		MergeSort(a, mid + 1, right);

		// Merge
		Merge(a, left, mid, right);
	}
}

void Merge(vector<int>& a, int left, int mid, int right) {
	vector<int> left_arr(a.begin() + left, a.begin() + mid + 1);		// + 1: [first, last)
	vector<int> right_arr(a.begin() + mid + 1, a.begin() + right + 1);	// + 1: [first, last)

	int i = left;
	int left_i = 0;
	int right_i = 0;

	while (left_i < left_arr.size() && right_i < right_arr.size()) {
		if (left_arr[left_i] <= right_arr[right_i]) {
			a[i++] = left_arr[left_i++];
		}
		else {
			a[i++] = right_arr[right_i++];
		}
	}

	while (left_i < left_arr.size()) {
		a[i++] = left_arr[left_i++];
	}

	while (right_i < right_arr.size()) {
		a[i++] = right_arr[right_i++];
	}
}