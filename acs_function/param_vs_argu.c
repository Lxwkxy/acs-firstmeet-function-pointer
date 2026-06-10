// 'a' และ 'b' คือ "Parameter" (ตัวแปรที่เปิดรอรับของ)
int add_numbers(int a, int b) { 
    return a + b;
}

int main() {
    int x = 10, y = 20;
    
    // 'x' และ 'y' คือ "Argument" (ของจริงที่โยนเข้าไป)
    int result = add_numbers(x, y); 
    return 0;
}