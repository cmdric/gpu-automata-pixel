
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <cstdio>

void readFile(std::string filename, char*& input, int& size);
void quickSortInput(char*& input);
void quickSort(double*& hit_Xs, double*& hit_Ys, int*& hit_IDs, int*& hit_Zs, int _beginning, int _end);
