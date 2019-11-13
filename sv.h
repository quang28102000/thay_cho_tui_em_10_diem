#ifndef SV_H
#define SV_H
#include <stdio.h>
typedef struct 
{
	char ten[51]; 
	char mssv[11];
	char lop[11];
	
	float diem_prf;
	float diem_mae;
	float diem_cae;
	float diem_ssg;
	float diem_csi;
} SV;

#endif
