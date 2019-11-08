#include "Support.h"

// Check if an array is in ascending order.
bool IsAscending(vector<int> a) {
	for (int i = 1; i < a.size(); ++i) {
		if (a[i] < a[i - 1]) {
			return false;
		}
	}
	return true;
}

// Print an array.
void Display(vector<int> a) {
	for (int i = 0; i < a.size(); ++i) {
		cout << " " << a[i];
	}
	cout << endl;
}

void Report(string file_name) {
	ofstream fout(file_name);

	if (fout.is_open()) {
		vector<DataOrder> data_order = { {0, "Random data"}, {1, "Sorted data"}, {2, "Reverse data"}, {3, "Nearly sorted data"} };

		vector<int> data_size = { 1000, 3000 };//10000, 30000, 100000 };

		vector<SortingAlgorithm> sorting_algorithm = { {"Selection sort", SelectionSort}, {"Insertion sort", InsertionSort},
			{"Binary insertion sort", BinaryInsertionSort}, {"Bubble sort", BubbleSort}, {"Shaker sort", ShakerSort},
			{"Shell sort", ShellSort}, {"Heap sort", HeapSort}, {"Merge sort", MergeSort}, {"Quick sort", QuickSort},
			{"Counting sort", CountingSort}, {"Radix sort", RadixSort}, {"Flash sort", FlashSort} };

		for (int i = 0; i < data_order.size(); ++i) {
			fout << i + 1 << ". " << data_order[i].Name << endl;

			for (int j = 0; j < data_size.size(); ++j) {
				fout << " " << i + 1 << "." << j + 1 << ". " << data_size[j] << endl;

				for (int k = 0; k < sorting_algorithm.size(); ++k) {
					vector<int> a = GenerateData(data_size[j], data_order[i].ID);

					clock_t begin = clock();
					sorting_algorithm[k].Sort(a);
					clock_t end = clock();
					double sort_time = ((double)end - begin) / CLOCKS_PER_SEC;

					fout << "  " << i + 1 << "." << j + 1 << "." << k + 1 << ". " << sorting_algorithm[k].Name << ": " << sort_time << endl;
				}
			}

			fout << endl;
		}

		fout.close();
	}

}