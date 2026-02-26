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
int main()
{
    char username[50], password[50];
    char listUser[][50] = {"admin", "user1", "user2"};
    char listPass[][50] = {"12345", "11111", "22222"};

    // Kiểm tra đăng nhập
    int found = 0;
    int checkLogin = 0;
    while (checkLogin < 3)
    {
        printf("Nhap username: ");
        gets(username);
        printf("Nhap password: ");
        gets(password);
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(username, listUser[i]) == 0 && strcmp(password, listPass[i]) == 0)
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("Dang nhap khong thanh cong! Ban con %d lan dang nhap.\n", 2 - checkLogin);
            checkLogin++;
        }
        else
        {
            printf("Dang nhap thanh cong!\n");
            break;
        }
    }
    if (checkLogin > 2)
    {
        printf("Ban vui long lien he CSKH de duoc ho tro!\n");
    }
    return 0;
}
