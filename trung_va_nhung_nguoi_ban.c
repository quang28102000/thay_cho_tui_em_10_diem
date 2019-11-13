#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "sv.h"
#include "nhan.h"
#include "quang.h"
#include "trung.h"
#define MAX 100

SV list[MAX];
int n;
void case1();

int main(int argc, char** argv)
{
	if(argc == 1)
	{
		printf("no input file\n");
		return -1;
	}
	if(!read_list(argv[1], list, &n))
	{
		printf("no such file\n");
		return -1;
	}



	write_list(argv[1], list, n);
	return 0;
}

void case1()
{
	char choice[4];
	SV* temp[n];
	for(int i = 0; i < n; i++)
	{
		temp[i] = &list[i];
	}

	printf("----------------------------------------------\n");
	printf("In ra danh sach duoc sap xep theo:\n");
	printf("ten, lop, prf, mae, cea, ssg, csi, avg\n");
	printf("Nhap vao lua chon:");
	scanf("%s", choice);
	if(strcmp(choice, "ten") == 0)
	{
			
	}
	else if(strcmp(choice, "lop") == 0)
	{

	}

	else if(strcmp(choice, "prf") == 0)
	{
		sort(list, n, cmp_prf);
	}

	else if(strcmp(choice, "mae") == 0)
	{
		sort(list, n, cmp_mae);
	}
	else if(strcmp(choice, "cae") == 0)
	{
		sort(list, n, cmp_cae);
	}
	else if(strcmp(choice, "ssg") == 0)
	{
		sort(list, n, cmp_ssg);
	}
	else if(strcmp(choice, "csi") == 0)
	{
		sort(list, n, cmp_csi);
	}

	else if(strcmp(choice, "avg") == 0)
	{
		sort(list, n, cmp_avg);
	}
	else
	{
		printf("ten truong ban nhap khong chinh xac\n");
	}

}
