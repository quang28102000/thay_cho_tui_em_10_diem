#ifndef TRUNG_H
#define TRUNG_H
#include "sv.h"

/**
 * Đọc danh sách sinh viên từ file
 * @param filename tên file chứa dữ liệu
 * @param arr mảng sẽ lưu thông tin sinh viên, các phần tử sẽ đươc cấp phát động và gán địa chỉ vào danh sách
 * @param size con trỏ trỏ đến biến chứa độ lớn của danh sách
 * @return true nếu đọc thành công
 */
int read_list(const char* filename, SV** arr, int* n); 

/**
 * Ghi danh sách sinh viên xuống file
 * @param filename tên file sẽ được ghi vào
 * @param arr danh sách sinh viên , các phần tử sẽ đc giải phóng bộ nhớ 
 * @param size con trỏ trỏ đến biến chứa độ lớn của danh sách
 * @return true nếu đọc thành công
 */
void write_list(const char* filename, SV** arr, int n);
/**
 * Tính điểm trung bình của một sinh viên
 * @param sv sinh viên cần tính điểm trung bình
 * @return điểm trung bình của sinh viên
 */
float avg(SV* sv); 

/**
 * So sánh điểm trung bình của hai sinh viên
 */
int cmp_avg(SV* sv1, SV* sv2);
#endif
