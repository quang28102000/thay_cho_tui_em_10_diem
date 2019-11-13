#ifndef TRUNG_H
#define TRUNG_H
#include "sv.h"

int read_list(const char* filename, SV* arr, int* n); 
void write_list(const char* filename, SV* arr, int n); 
float avg(const SV* sv); 
int cmp_avg(const SV* sv1, const SV* sv2);
#endif
