#include <stdio.h>

int main() {

    float input;   
    int fixed;     // 고정소수점 변환 값입니다.

    printf("입력값: ");
    scanf_s("%f", &input); //scanf만 작성할시 경고뜨므로 웬만하면 _S붙여줍니다.

    // Q8.8 고정소수점은 소수부가 8비트이므로 입력값에 2^8(256)을 곱해 정수로 변환합니다.
    fixed = (int)(input * 256);

    // 16비트 비트패턴을 출력해줍니다. (정수부 8비트, 소수부 8비트)
    for (int i = 15; i >= 0; i--) {

        if (i == 7)   // 정수부와 소수부를 구분합니다.
            printf(".");

        printf("%d", (fixed >> i) & 1);   // 비트를 출력합니다.
    }

    printf("\n");

    return 0;
}
