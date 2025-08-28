#include <stdio.h>

int main() {
    int level;

    // รับค่าจากผู้ใช้
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบว่าค่าที่รับมาอยู่ในช่วงที่ยอมรับได้หรือไม่
    if (level <= 0) {
        // กรณีค่าต่ำกว่าหรือเท่ากับ 0
        printf("The level below 1 is not allowed\n");
    }
    else if (level > 4) {
        // กรณีค่ามากกว่า 4
        printf("The level above 4 is not allowed\n");
    }
    else {
        // กรณีค่าระดับปกติในช่วง 1-4 ใช้ switch เพื่อแสดงข้อความตามระดับ
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
