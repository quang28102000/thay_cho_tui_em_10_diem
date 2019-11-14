#ifndef QUANG_H
#define QUANG_H
#include "sv.h"

/**
 * Chèn một sinh viên vào danh sách được sắp xếp theo tên
 * @param arr mảng con chứa danh sách học sinh
 * @param size con trỏ tới biến chứa độ lớn của mảng
 * @param sv sinh viên cần đc chèn vào
 * @return true nếu chèn thành công
 */
int insert_sv(SV** arr, int* size, SV* sv);

/**
 * Xóa một sinh viên ra khỏi danh sách
 * @param arr mảng chứa danh sách học sinh
 * @param size con trỏ tới biến chứa độ  lớn của mảng
 * @param index vị trí cần xóa
 * @return true nếu xóa thành công
 */
int remove_sv(SV** arr, int* size, int index);

/**
 * Tìm một sinh viên với tên
 * @param arr mảng chứa danh sách học sinh
 * @param size độ lớn của mảng
 * @param ten tên sinh viên
 * return index của sinh viên có tên tương ứng hoặc -1 nếu không tìm thấy
 */
int find_by_ten(SV** arr, int size, const char* ten);

/**
 * Tìm một sinh viên với tên
 * @param arr mảng chứa danh sách học sinh
 * @param size độ lớn của mảng
 * @param ten tên sinh viên
 * return index của sinh viên có mssv tương ứng hoặc -1 nếu không tìm thấy
 */

int find_by_mssv(SV** arr, int size, const char* mssv);

/**
 * Tìm một sinh viên với tên
 * @param arr mảng chứa danh sách học sinh
 * @param size độ lớn của mảng
 * @param ten tên sinh viên
 * return index của sinh viên có lớp  tương ứng hoặc -1 nếu không tìm thấy
 */
int find_by_lop(SV** arr, int size, const char* lop);


int cmp_ten(SV* sv1, SV* sv2);

#endif
