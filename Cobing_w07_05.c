#include <stdio.h>

int main() {
    int age, vip;
    float amount, discountRate = 0.0;

    // รับข้อมูลจากผู้ใช้
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // คำนวณส่วนลดตามระดับ VIP
    switch(vip) {
        case 1: discountRate = 0.05; break; // 5%
        case 2: discountRate = 0.10; break; // 10%
        case 3: discountRate = 0.15; break; // 15%
        case 4: discountRate = 0.20; break; // 20%
        case 5: discountRate = 0.25; break; // 25%
        default: discountRate = 0.0; break; // กรณีใส่ไม่ถูก
    }

    // แสดงผลลัพธ์
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip, amount);
    printf("Discount received: %.0f%%\n", discountRate * 100);
    printf("\nThank you for shopping with us!\n");

    return 0;
}