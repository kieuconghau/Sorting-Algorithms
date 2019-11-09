#include "ShellSort.h"

void ShellSort(vector<int>& a) {
	// Create all gaps
	vector<int> gap;
	for (int i = 0, h = 1; h < a.size(); ++i) {
		gap.push_back(h);
		h = 3 * h + 1;
	}

	// Sort
	for (int i = gap.size() - 1; i >= 0; --i) {
		// h-sorted (with h = gap[i])
		for (int j = 0; j < gap[i]; ++j) {	// Divide the array a into h = gap[i] sub-arrays
			// Use Insertion sort to sort the sub-array which has a[gap[i] + j]
			for (int k = gap[i]; k < a.size(); k += gap[i]) {
				int temp = a[k];
				int p;

				for (p = k - gap[i]; p >= 0; p -= gap[i]) {
					if (a[p] > temp) {
						a[p + gap[i]] = a[p];
					}
					else {
						break;
					}
				}

				a[p + gap[i]] = temp;
			}
		}
	}
}

