#include "FlashSort.h"
#include "InsertionSort.h"

void FlashSort(vector<int>& a) {
	ClassifyByCountingSort(a);	// Sort this array to be nearly sorted.
	InsertionSort(a);			// This algorithm is very powerful if an array is NEARLY SORTED.
}

void ClassifyByCountingSort(vector<int>& a) {
	int const min = *min_element(a.begin(), a.end());
	int const max = *max_element(a.begin(), a.end());

	if (min == max) {
		return;
	}

	int const class_number = 0.1 * a.size();

	vector<int> fre(class_number, 0);
	for (int i = 0; i < a.size(); ++i) {
		++fre[Class(a[i], class_number, min, max)];
	}

	for (int i = 1; i < fre.size(); ++i) {
		fre[i] += fre[i - 1];
	}

	vector<int> b(a.size());
	for (int i = b.size() - 1; i >= 0; --i) {
		b[--fre[Class(a[i], class_number, min, max)]] = a[i];
	}

	a = b;
}

// Class ID is counted from 0
int Class(int number, int class_number, int min, int max) {
	return ((double)number - min) / ((double)max - min) * ((double)class_number - 1);
}

