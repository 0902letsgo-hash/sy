#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 초를 시, 분, 초로 변환하여 포인터에 저장하는 함수
void to_hms(int total, int* h, int* m, int* s) {
    *h = total / 3600;           // 시 계산
    *m = (total % 3600) / 60;    // 분 계산
    *s = total % 60;             // 초 계산
}

int main(void) {
    int total;
    int h, m, s;

    printf("총 시간(초)을 입력하시오 : ");
    scanf("%d", &total);

    // 변수의 주소(&)를 인자로 전달하여 함수 호출
    to_hms(total, &h, &m, &s);

    printf("%d시간 %d분 %d초\n", h, m, s);

    return 0;
}