/*
문제 해석 : 1부터 31까지의 마음속에 있는 숫자를 알아내는 마술카드를 프로그래밍

1. 1부터 31까지의 숫자를 먼저 생각하도록 함
2. 5장의 카드가 한 장씩 나타나면서 그 카드에 내가 생각한 숫자가 있는지 없는지를 대답
3. 5장의 카드를 모두 대답하면 내가 생각한 숫자가 화면에 나타나도록 함

- 이해가 되었다면 n장의 카드를 입력으로 받아 처리하는 프로그램으로 확장하여 작성
- 좀 더 어려운 내용을 원한다면 카드의 자수를 늘려 실행 시간 스택(stack) 오버플로우를 발생시키고, 언제 오버플로우가 나는지 확인
- 정적 할당 vs 동적 할당으로 작성하여 비교
- 마지막 단계로는 우리가 사용하는 카드처럼 예쁘게 만들어보는 것을 추천
*/
#include <stdio.h>

// Mac에선 오류 발생, Windows에서 실행 필요
// ref)https://stackoverflow.com/questions/48288314/windows-h-alternative-for-mac-os
//#include <Windows.h>

void my_opening();

int my_card1(int (*)[4]);
int my_card2(int (*)[4]);
int my_card3(int (*)[4]);
int my_card4(int (*)[4]);
int my_card5(int (*)[4]);

void my_res(int, int, int, int, int);

int main(void) {
    int card1[4][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int card2[4][4] = { 2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31};
    int card3[4][4] = { 4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31};
    int card4[4][4] = { 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31};
    int card5[4][4] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};

    int (*ca1)[4];
    int (*ca2)[4];
    int (*ca3)[4];
    int (*ca4)[4];
    int (*ca5)[4];

    int a, b, c, d, e;
    char k;
    my_opening();

    printf("생각하셨어요? 시작하려면 엔터를 누르시오. ");
    scanf("%c", &k);
    printf("\n\n");

    ca1 = card1;
    a = my_card1(card1);
    ca2 = card3;
    b = my_card2(card2);
    ca3 = card3;
    c = my_card3(card3);
    ca4 = card4;
    d = my_card5(card5);
    ca5 = card5;
    e = my_card5(card5);

    my_res(a, b, c, d, e);

    system("PAUSE");
    return 0;
}

void my_opening() {
    printf("# 지금부터 여러분을 신비한 마술의 세계로 초대합니다.\n\n\n");
    printf("1 - 31의 숫자 중 마음에 드는 숫자를 생각해 보세요.\n\n\n");
}

int my_card1(int (*ca1)[4]) {
    int i, j, a;

    while(1) {
        printf("    --------- A 카드 ---------\n");
        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++)
                printf("%7d", ca1[i][j]);
            printf("\n");
        }
        printf("    ----------------\n");
        printf("\n\n");
        printf("A 카드에 생각한 숫자가 있다면 YES(1번),\n");
        printf("없다면 NO(0번)을 선택하여 주시기 바랍니다. : ");
        scanf("%d", &a);
        printf("\n\n");

        if(a > -1 && a < 2) {
            return a;
            break;
        }
    }
}

int my_card2(int (*ca2)[4]) {
    int i, j, b;

    while(1) {
        printf("    --------- B 카드 ---------\n");
        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++)
                printf("%7d", ca2[i][j]);
            printf("\n");
        }
        printf("    ----------------\n");
        printf("\n\n");
        printf("B 카드에 생각한 숫자가 있다면 YES(1번),\n");
        printf("없다면 NO(0번)을 선택하여 주시기 바랍니다. : ");
        scanf("%d", &b);
        printf("\n\n");

        if(b > -1 && b < 2) {
            return b;
            break;
        }
    }
}

int my_card3(int (*ca3)[4]) {
    int i, j, a;

    while(1) {
        printf("    --------- C 카드 ---------\n");
        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++)
                printf("%7d", ca3[i][j]);
            printf("\n");
        }
        printf("    ----------------\n");
        printf("\n\n");
        printf("C 카드에 생각한 숫자가 있다면 YES(1번),\n");
        printf("없다면 NO(0번)을 선택하여 주시기 바랍니다. : ");
        scanf("%d", &c);
        printf("\n\n");

        if(c > -1 && c < 2) {
            return c;
            break;
        }
    }
}

int my_card4(int (*ca4)[4]) {
    int i, j, d;

    while(1) {
        printf("    --------- D 카드 ---------\n");
        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++)
                printf("%7d", ca4[i][j]);
            printf("\n");
        }
        printf("    ----------------\n");
        printf("\n\n");
        printf("D 카드에 생각한 숫자가 있다면 YES(1번),\n");
        printf("없다면 NO(0번)을 선택하여 주시기 바랍니다. : ");
        scanf("%d", &d);
        printf("\n\n");

        if(d > -1 && d < 2) {
            return d;
            break;
        }
    }
}

int my_card5(int (*ca5)[4]) {
    int i, j, e;

    while(1) {
        printf("    --------- E 카드 ---------\n");
        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++)
                printf("%7d", ca5[i][j]);
            printf("\n");
        }
        printf("    ----------------\n");
        printf("\n\n");
        printf("E 카드에 생각한 숫자가 있다면 YES(1번),\n");
        printf("없다면 NO(0번)을 선택하여 주시기 바랍니다. : ");
        scanf("%d", &e);
        printf("\n\n");

        if(e > -1 && e < 2) {
            return e;
            break;
        }
    }
}

void my_res(int a, int b, int c, int d, int e) {
    int res;
    res = (e * 2 * 2 * 2 * 2) + (d * 2 * 2 * 2) + (c * 2 * 2) + (b * 2) + (a);

    printf("당신이 마음에 드는 숫자는 %d입니다.\n\n\n", res);
    printf("어때요? 신기하죠!\n");
    printf("지금까지 마술의 세게였습니다.\n\n");
}