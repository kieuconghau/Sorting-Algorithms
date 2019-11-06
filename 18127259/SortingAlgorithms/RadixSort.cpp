#include "RadixSort.h"

void RadixSort(vector<int>& a) {
	int min = *min_element(a.begin(), a.end());
	int max = *max_element(a.begin(), a.end());

	for (int exp = 0; (max - min) / int(pow(10, exp)) != 0; ++exp) {
		vector<int> fr(10, 0);
		for (int i = 0; i < a.size(); ++i) {
			++fr[((a[i] - min) / int(pow(10, exp))) % 10];
		}

		for (int i = 1; i < fr.size(); ++i) {
			fr[i] += fr[i - 1];
		}

		vector<int> b(a.size());
		for (int i = b.size() - 1; i >= 0; --i) {
			b[--fr[((a[i] - min) / int(pow(10, exp))) % 10]] = a[i];
		}

		a = b;
	}
}
