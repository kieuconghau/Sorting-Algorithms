#pragma once

#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
#include <vector>
using namespace std;

vector<int> GenerateRandomData(int size);

vector<int> GenerateSortedData(int size);

vector<int> GenerateReverseData(int size);

vector<int> GenerateNearlySortedData(int size);

vector<int> GenerateData(int size, int data_type);
