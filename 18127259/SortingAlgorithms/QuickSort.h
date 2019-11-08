#pragma once
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void QuickSort(vector<int>& a);

void QuickSort(vector<int>& a, int left, int right);

int Partition(vector<int>& a, int left, int right);