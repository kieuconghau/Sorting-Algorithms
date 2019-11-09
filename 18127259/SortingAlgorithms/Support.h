#pragma once

#include "AllSortingAlgorithms.h"
#include "DataGenerator.h"
#include <fstream>
#include <string>

struct DataOrder {
	int ID;
	string Name;
};

struct SortingAlgorithm {
	string Name;
	void(*Sort) (vector<int>&);
};

bool IsAscending(vector<int> a);

void Display(vector<int> a);

void ReportText(string file_name);

void ReportCSV();
