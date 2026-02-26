/******************************************************************************
 * Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
int main() {
    char username[50], password[50];
    printf("Nhap username: ");
    gets(username);
    printf("Nhap password: ");
    gets(password);
    // Kiểm tra đăng nhập
    if (strcmp(username, "admin") == 0 && strcmp(password, "12345") == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap khong thanh cong!\n");
    }
    return 0;
}
