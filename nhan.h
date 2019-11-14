#ifndef NHAN_H
#define NHAN_H
#include "sv.h"

/**
 * Sắp xếp danh sách học sinh
 * @param arr danh sách học sinh
 * @param size độ lớn của danh sách
 * @cmp hàm so sánh hai sinh viên
 */
void sort(SV** arr, int size, int (*cmp)(SV*, SV*));

/**
 * Hàm so sánh hai sinh viên theo điểm prf
 * @param sv1 sinh viên thứ nhất
 * @param sv2 sinh viên thứ hai
 * return -1 nếu điểm prf của sv1 bé hơn của sv2, 0 nếu bằng nhau và 1 nếu lớn hơn
 */
int cmp_prf(SV* sv1, SV* sv2);

/**
 * @see @cmp_prf
 */
int cmp_mae(SV* sv1, SV* sv2);

/**
 * @see @cmp_prf
 */
int cmp_cae(SV* sv1, SV* sv2);

/**
 * @see @cmp_prf
 */
int cmp_ssg(SV* sv1, SV* sv2);

/**
 * @see @cmp_prf
 */
int cmp_csi(SV* sv1, SV* sv2);

#endif
