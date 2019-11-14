#ifndef NHAN_H
#define NHAN_H
#include "sv.h"
//phần này dành cho anh Nhân
void sort(SV** arr, int size, int (*cmp)(SV*, SV*));

//trả về -1 cho bé hơn, 0 cho bằng nhau và 1 cho lớn hơn
int cmp_prf(SV* sv1, SV* sv2);
int cmp_mae(SV* sv1, SV* sv2);
int cmp_cae(SV* sv1, SV* sv2);
int cmp_ssg(SV* sv1, SV* sv2);
int cmp_csi(SV* sv1, SV* sv2);

#endif
