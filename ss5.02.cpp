#include <stdio.h>

int main() {
    int number = 42;  // S? cho tru?c
    int input; 

    printf("Nhap so de ket thuc chuong trinh (so cho truoc la %d):\n", number);

    do {
        // Yêu c?u ngu?i dùng nh?p m?t s?
        printf("Nhap mot so: ");
        scanf("%d", &input);
    } while (input != number); 
    printf("Chuc mung! Ban da nhap dung so %d.\n", number);

    return 0;
}
