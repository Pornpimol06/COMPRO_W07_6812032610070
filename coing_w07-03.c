#include <stdio.h>

int main() {
    int level; // ประกาศตัวแปรเก็บค่าระดับที่ผู้ใช้ป้อน

    // รับค่าจากผู้ใช้
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบกรณีที่ไม่เข้าเงื่อนไข
    if (level <= 0) {
        printf("The level below 1 is not allowed.\n");
    } else if (level > 4) {
        printf("The level above 4 is not allowed.\n");
    } else {
        // กรณีค่าอยู่ในช่วงที่กำหนด (1-4) ใช้ switch แสดงผล
        switch (level) {
            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
        }
    }

    return 0;
}
