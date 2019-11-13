#include "trung.h"
#include <stdio.h>
void write_sv(FILE* file, SV* sv)
{
	fprintf(file, "ten:%s;mssv:%s;lop:%s;prf:%f;mae:%f;cae:%f;ssg:%f;csi:%f;\n",
		      	sv->ten,
	       		sv->mssv,
	 		sv->lop,
			sv->diem_prf,
			sv->diem_mae,
			sv->diem_cae,
			sv->diem_ssg,
			sv->diem_csi		
			);
}

void read_sv(FILE* file, SV* sv)
{
	fscanf(file, "ten:%[^;];mssv:%[^;];lop:%[^;];prf:%f;mae:%f;cae:%f;ssg:%f;csi:%f;\n",
		      	sv->ten,
	       		sv->mssv,
	 		sv->lop,
			&sv->diem_prf,
			&sv->diem_mae,
			&sv->diem_cae,
			&sv->diem_ssg,
			&sv->diem_csi		
			);
}

int read_list(const char* filename, SV* arr, int* n)
{
	FILE* fi = fopen(filename, "r");
	if(fi == NULL)
	{
		printf("Could not open \'%s\'", filename);
		return 0;
	}
	fscanf(fi, "%d\n", n);
	for(int i = 0; i < *n; i++)
	{
		read_sv(fi, &arr[i]);
	}
	
	fclose(fi);	
	return 1;
}

void write_list(const char* filename, SV* arr, int n)
{
	FILE* fo = fopen(filename, "w");
	fprintf(fo, "%d\n", n);
	for(int i = 0; i < n; i++)
	{
		write_sv(fo, &arr[i]);
	}
	fclose(fo);
}

float avg(SV* sv)
{
	return (sv->diem_prf + sv->diem_mae + sv->diem_cae + sv->diem_ssg + sv->diem_csi) / 5.f;
}

int cmp_arg(SV* sv1,   SV* sv2)
{
	float avg1 = avg(sv1);
	float avg2 = avg(sv2);
	if(avg1 < avg2)
		return -1;
	else if(avg1 > avg2)
		return 1;
	else 
		return 0;	
}
