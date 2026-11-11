#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열의 모든 가격을 할인된 가격으로 바꾸는 함수 (원 단위 미만 버림은 정수 연산으로 자동 처리)
void apply_discount(int* price, int n, int percent) {
    for (int i = 0; i < n; i++) {
        *(price + i) = *(price + i) * (100 - percent) / 100;
    }
}

// 배열의 가격들을 출력하는 함수
void print_prices(int* price, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(price + i));
    }
    printf("\n");
}

int main(void) {
    // 상품 가격 5개를 int 배열에 하드코딩
    int prices[5] = { 12000, 8500, 3000, 45000, 990 };
    int percent;

    printf("할인율(%%)을 입력하시오 : ");
    scanf("%d", &percent);

    printf("할인 전 : ");
    print_prices(prices, 5);

    // 할인 적용 함수 호출 (배열의 주소 전달)
    apply_discount(prices, 5, percent);

    printf("할인 후 : ");
    print_prices(prices, 5);

    return 0;
}