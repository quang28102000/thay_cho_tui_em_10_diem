#include "trung.h"
#include <stdio.h>
void write_sv(FILE* file, SV* sv)
{
	fprintf("ten:%s;mssv:%s;lop:%s;prf:%f;mae:%s;cae:%f;ssg:%f;csi:%f;\n",
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
	fscanf("ten:%[^;];mssv:%[^;];lop:%[^;];prf:%f;mae:%s;cae:%f;ssg:%f;csi:%f;\n",
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
