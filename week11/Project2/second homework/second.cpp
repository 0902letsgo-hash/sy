#include <stdio.h>

// 주소를 전달받아 값을 서로 바꾸는 swap 함수
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int num1 = 45510;
    int num2 = 2023;

    // 변수의 주소(&)를 인자로 전달
    swap(&num1, &num2);

    printf("num1 value : %d\n", num1);
    printf("num2 value : %d\n", num2);

    return 0;
}