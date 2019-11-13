#ifndef QUANG_H
#define QUANG_H
#include "sv.h"
void insert(SV* arr, int* size, SV sv);
void delete(SV* arr, int* size, int index);

int find_by_ten(SV* arr, int size, const char* ten);
int find_by_mssv(SV* arr, int size, const char* mssv);
int find_by_lop(SV* arr, int size, const char* lop);

#endif
