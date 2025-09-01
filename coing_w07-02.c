#include <stdio.h>

int main() {
    int x, y; // ประกาศตัวแปรจำนวนเต็ม 2 ตัว เพื่อเก็บค่าจากผู้ใช้

    // รับค่าจากผู้ใช้
    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่า x และ y
    if (x > y) {
        // กรณี x มากกว่า y
        printf("x is greater than y\n");
    } else if (x < y) {
        // กรณี x น้อยกว่า y
        printf("x is less than y\n");
    } else {
        // กรณี x เท่ากับ y
        printf("x is equal to y\n");
    }

    return 0;
}
