#include <stdio.h>

int main() {
    int level;

    // รับค่าระดับสมาชิกจากผู้ใช้
    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    // ใช้ switch ในการตรวจสอบและแสดงสิทธิประโยชน์
    switch (level) {
        case 1:
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: All benefits + VIP events\n");
            break;
        default:
            // กรณี level ไม่ใช่ 1-4
            printf("Invalid membership level\n");
    }

    return 0;
}
