/******************************************************************************
 * Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
void swap(char str1[], char str2[]) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
int main() {
    char strings[5][100];
    printf("Nhap vao 5 chuoi:\n");
    for (int i = 0; i < 5; i++) {
        gets(strings[i]);
    }
    // Sắp xếp bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                swap(strings[j], strings[j + 1]);
            }
        }
    }
    printf("Cac chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }
    return 0;
}
