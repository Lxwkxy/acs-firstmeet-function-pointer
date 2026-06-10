#include <stdio.h>

// แบบมี Return: ทำงานเสร็จ ต้องส่งของกลับ
int get_bonus() {
    return 500; 
}

// แบบ Void: ทำงานจบในตัว ไม่ต้องส่งอะไรกลับ
void print_banner() {
    printf("=== WELCOME TO THE GAME ===\n");
}

int main() {
    // การเรียกใช้ฟังก์ชันแบบ Void (เรียกเฉยๆ ไม่ต้องมีตัวแปรมารับ)
    print_banner();
    
    // การเรียกใช้ฟังก์ชันแบบมี Return (ต้องมีตัวแปรมารับของที่คายออกมา)
    int my_money = 1000;
    my_money = my_money + get_bonus(); 
    
    printf("Total money: %d\n", my_money);
    return 0;
}