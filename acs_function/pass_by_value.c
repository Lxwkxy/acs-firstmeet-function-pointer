#include <stdio.h>

// ฟังก์ชันนี้พยายามจะเปลี่ยนคะแนนให้เป็น 99
void cheat_score(int s) {
    s = 99; // เปลี่ยนค่า s เป็น 99
    printf("Inside function, score is: %d\n", s);
}

int main() {
    int my_score = 10; // คะแนนต้นฉบับคือ 10
    
    // ส่ง my_score เข้าไป (มันจะส่งแค่ 'สำเนา' ของเลข 10 ไปให้ s)
    cheat_score(my_score); 
    
    // คะแนนต้นฉบับใน main ยังคงเป็น 10 เหมือนเดิม!
    printf("Back in main, my_score is still: %d\n", my_score); 
    
    return 0;
}