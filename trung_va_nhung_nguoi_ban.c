#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "sv.h"
#include "nhan.h"
#include "quang.h"
#include "trung.h"

SV* g_list_of_sv[100];
int g_size;


void case1();//liet ke ds
void case2();//chinh sua sv
void case3();//them sv
void case4();//xoa sv

int main(int argc, char** argv)
{
	if(argc == 1)
	{
		printf("no input file\n");
		return -1;
	}
	if(!read_list(argv[1], g_list_of_sv, &g_size))
	{
		printf("no such file\n");
		return -1;
	}

	int choice;
	do {
		printf("1 - Liet ke danh sach\n");
		printf("2 - Chinh sua thong tin\n");
	       	printf("3 - Them sv\n");
		printf("4 - Xoa sn\n");
		printf("5 - Luu va thoat\n");	
	} while(choice != 5);
	write_list(argv[1], g_list_of_sv, g_size);
}

void case1()
{
	printf("**********************************************\n");
	printf("ten - Liet ke theo ten\n");
	printf("lop - Liet ke theo lop\n");
	printf("prf - Liet ke theo diem prf\n");
	printf("mae - Liet ke theo diem mae\n");
	printf("cae - Liet ke theo diem cae\n");
	printf("ssg - Liet ke theo diem ssg\n");
	printf("csi - Liet ke theo diem csi\n");
	printf("avg - liet ke theo diem tb\n");
	char choice[4];
	int (*cmp)(SV*, SV*) = NULL;
	do
	{
		printf("Nhap lua chon: ");
		scanf("%s", choice);
		if(strcmp(choice, "ten") == 0)
		{
			cmp = cmp_ten;
		}
		else if(strcmp(choice, "lop") == 0)
		{
			cmp = cmp_ten;
		}
		else if(strcmp(choice, "prf") == 0)
		{
			cmp = cmp_prf;
		}
		else if(strcmp(choice, "mae") == 0)
		{
			cmp = cmp_mae;
		}
		else if(strcmp(choice, "cae") == 0)
		{
			cmp = cmp_cae;
		}
		else if(strcmp(choice, "ssg") == 0)
		{
			cmp = cmp_ssg;
		}
		else if(strcmp(choice, "csi") == 0)
		{
			cmp = cmp_csi;
		}
		else if(strcmp(choice, "avg") == 0)
		{
			cmp = cmp_avg;
		}

	}while(cmp == NULL);

	SV** temp = (SV**) calloc(g_size, sizeof(SV*));
	
	free(temp);
	
}

void case2()
{}

void case3()
{}

void case4()
{}
