#pragma once
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void QuickSort(vector<int>& a, bool random_mode = 0);

void QuickSort(vector<int>& a, int left, int right, bool random_mode);

int Partition(vector<int>& a, int left, int right, bool random_mode);