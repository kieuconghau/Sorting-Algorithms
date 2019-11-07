#include "DataGenerator.h"

// Hàm phát sinh mảng dữ liệu ngẫu nhiên
vector<int> GenerateRandomData(int size) {
	vector<int> a(size);
	srand((unsigned int)time(NULL));
	
	for (int i = 0; i < size; i++) {
		a[i] = rand() % size;
	}
}

// Hàm phát sinh mảng dữ liệu có thứ tự tăng dần
vector<int> GenerateSortedData(int size) {
	vector<int> a(size);

	for (int i = 0; i < size; i++) {
		a[i] = i;
	}
}

// Hàm phát sinh mảng dữ liệu có thứ tự ngược (giảm dần)
vector<int> GenerateReverseData(int size) {
	vector<int> a(size);
	
	for (int i = 0; i < size; i++) {
		a[i] = size - 1 - i;
	}
}

// Hàm phát sinh mảng dữ liệu gần như có thứ tự
vector<int> GenerateNearlySortedData(int size) {
	vector<int> a(size);

	for (int i = 0; i < size; i++) {
		a[i] = i;
	}
	
	srand((unsigned int) time(NULL));
	for (int i = 0; i < 10; i ++) {
		int r1 = rand() % size;
		int r2 = rand() % size;
		swap(a[r1], a[r2]);
	}
}

vector<int> GenerateData(int size, int data_type) {
	switch (data_type)
	{
	case 0:	// ngẫu nhiên
		return GenerateRandomData(size);
	case 1:	// có thứ tự
		return GenerateSortedData(size);
	case 2:	// có thứ tự ngược
		return GenerateReverseData(size);
	case 3:	// gần như có thứ tự
		return GenerateNearlySortedData(size);
	default:
		cout << "Error: unknown data type!" << endl;
	}
}

