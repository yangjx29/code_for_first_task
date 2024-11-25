struct   student {
    char name [(448 - 428)];
    int score;
    int judge;
    char c1;
    char c2;
    char num;
    int money;
};
int main () {
    struct   student a [501];
    char s1 [(703 - 683)];
    int max;
    int sum;
    int i;
    int n;
    max = (853 - 853);
    sum = (244 - 244);
    int score1;
    int num1;
    int judge1;
    char c11;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char c12;
    struct   student *p;
    p = a;
    scanf ("%d", &n);
    for (; a + n > p; p = p + 1) {
        scanf ("%s", s1);
        scanf ("%d %d %c %c %d", &score1, &judge1, &c11, &c12, &num1);
        strcpy (p->name, s1);
        p->c1 = c11;
        p->c2 = c12;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p->judge = judge1;
        p->num = num1;
        p->score = score1;
        p->money = (562 - 562);
    }
    p = a;
    for (; a + n > p; p++) {
        if ((551 - 471) < p->score && p->num > (271 - 271))
            p->money = p->money + (8139 - 139);
        if ((208 - 128) < p->judge && (357 - 272) < p->score)
            p->money = p->money + (4582 - 582);
        if (90 < p->score)
            p->money = p->money + (2395 - 395);
        if (!('Y' != p->c1) && p->judge > 80)
            p->money = p->money + (1282 - 432);
        if (p->c2 == 'Y' && p->score > (204 - 119))
            p->money += (1528 - 528);
    }
    p = a;
    for (; p < a + n; p++) {
        if (p->money > max)
            max = p->money;
        sum = sum + p->money;
    }
    p = a;
    for (; p < a + n; p++) {
        if (p->money == max) {
            printf ("%s\n%d\n", p->name, p->money);
            break;
        };
    }
    printf ("%d\n", sum);
    return 0;
}

