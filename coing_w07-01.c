#include <stdio.h>

int main() {
    float score;       // ตัวแปรเก็บคะแนนที่ผู้ใช้ป้อนเข้ามา
    float totalScore;  // ตัวแปรเก็บคะแนนรวมหลังการเพิ่ม

    // รับค่าคะแนนจากผู้ใช้
    printf("Enter your midterm score: ");
    scanf("%f", &score);

    // ตรวจสอบว่าคะแนนมากกว่าหรือเท่ากับ 50 หรือไม่
    if (score >= 50) {
        // เพิ่มคะแนนอีก 5%
        totalScore = score + (score * 0.05);
    } else {
        // ไม่เพิ่มคะแนน
        totalScore = score;
    }

    // แสดงคะแนนรวมหลังเพิ่ม (ถ้ามี)
    printf("Total score after evaluation: %.2f\n", totalScore);

    // แสดงข้อความสิ้นสุดการประเมิน
    printf("End of evaluation\n");

    return 0;
}
