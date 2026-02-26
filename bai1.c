/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int nguyenAm = 0, phuAm = 0;
    printf("Nhap vao mot chuoi: ");
    gets(str);
    strupr(str);
    if (strlen(str) == 0) {
        printf("Chuoi rong!\n");
        return 0;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y') {
            nguyenAm++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            phuAm++;
        }
    }

    printf("So luong nguyen am: %d\n", nguyenAm);
    printf("So luong phu am: %d\n", phuAm);
    return 0;
}

