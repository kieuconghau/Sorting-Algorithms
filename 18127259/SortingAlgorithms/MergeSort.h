#pragma once

#include <iostream>
#include <vector>
using namespace std;

void MergeSort(vector<int>& a);

void MergeSort(vector<int>& a, int left, int right);

void Merge(vector<int>& a, int left, int mid, int right);