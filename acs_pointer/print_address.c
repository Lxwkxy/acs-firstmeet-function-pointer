#include <stdio.h>

int main() {
    int num = 419; // สร้างตัวแปร
    
    // ปริ้นท์ค่าปกติ
    printf("Value of num: %d\n", num);
    
    // ปริ้นท์ที่อยู่ (Address) ใช้ & เพื่อขอที่อยู่ และ %p เพื่อแสดงผล
    printf("Address of num: %p\n", &num); 
    
    return 0;
}