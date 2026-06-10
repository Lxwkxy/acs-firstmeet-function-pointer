#include<stdio.h>

int main() {
    int p1_atk = 100, p2_atk = 120, p3_atk = 90;

    // ต้องพิมพ์สูตรเดิมซ้ำๆ ทุกครั้งที่ตัวละครโจมตี
    float dmg1 = (p1_atk + 50) * 1.5; 
    float dmg2 = (p2_atk + 50) * 1.5;
    float dmg3 = (p3_atk + 50) * 1.5;

    // คำถาม: ถ้าวันนึงเกมอัปเดตแพตช์ อาวุธโดนเนิร์ฟเหลือ +20 และบัฟเหลือ 1.2
    // เราต้องตามไปไล่แก้ตัวเลขในโค้ดกี่ที่? (ถ้ามีตัวละคร 100 ตัว ก็ต้องแก้ 100 บรรทัด!)
    
    return 0;
}

// จับสูตรมาไว้ในฟังก์ชัน (กล่องเครื่องจักร)
float calculate_damage(int atk) {
    // วันไหนเกมอัปเดตแพตช์ เราเดินมาแก้ตัวเลขแค่ "บรรทัดนี้บรรทัดเดียว" จบเลย!
    return (atk + 20) * 1.2; 
}

int main() {
    int p1_atk = 100, p2_atk = 120, p3_atk = 90;

    // เรียกใช้งานฟังก์ชันแทน โค้ดดูสะอาดตาขึ้นมาก
    float dmg1 = calculate_damage(p1_atk);
    float dmg2 = calculate_damage(p2_atk);
    float dmg3 = calculate_damage(p3_atk);
    
    return 0;
}