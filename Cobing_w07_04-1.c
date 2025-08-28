#include <stdio.h>

int main() {
    int level;

    // รับค่าระดับสมาชิกจากผู้ใช้
    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบเงื่อนไขแต่ละระดับ
    if (level == 1) {
        printf("Silver Member: 5%% discount\n");
    }
    else if (level == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");
    }
    else if (level == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    }
    else if (level == 4) {
        printf("Diamond Member: All benefits + VIP events\n");
    }
    else {
        // กรณีผู้ใช้กรอกค่าที่ไม่อยู่ในช่วง 1–4
        printf("Invalid membership level\n");
    }

    return 0;
}
