struct   student {
    int id;
    int vF2L5pktuQ;
    int math;
    int total;
};
int main () {
    int max_0_id, max_1_id, max_2_id;
    int max_0 = (55 - 55), max_1 = (507 - 507), k5VOZIkjlua = 0;
    struct   student tEsrW1IcZktL [(100972 - 972)];
    int i, num;
    scanf ("%d", &num);
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
    {
        i = 0;
        while (num > i) {
            scanf ("%d %d %d", &(tEsrW1IcZktL[i].id), &(tEsrW1IcZktL[i].vF2L5pktuQ), &(tEsrW1IcZktL[i].math));
            tEsrW1IcZktL[i].total = tEsrW1IcZktL[i].vF2L5pktuQ + tEsrW1IcZktL[i].math;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (max_0 < tEsrW1IcZktL[i].total) {
                max_2_id = max_1_id;
                k5VOZIkjlua = max_1;
                max_1 = max_0;
                max_0 = tEsrW1IcZktL[i].total;
                max_1_id = max_0_id;
                max_0_id = tEsrW1IcZktL[i].id;
            }
            else {
                if (tEsrW1IcZktL[i].total > max_1) {
                    max_2_id = max_1_id;
                    k5VOZIkjlua = max_1;
                    max_1 = tEsrW1IcZktL[i].total;
                    max_1_id = tEsrW1IcZktL[i].id;
                }
                else if (tEsrW1IcZktL[i].total > k5VOZIkjlua) {
                    k5VOZIkjlua = tEsrW1IcZktL[i].total;
                    max_2_id = tEsrW1IcZktL[i].id;
                };
            }
            ++i;
        };
    }
    printf ("%d %d\n", max_0_id, max_0);
    printf ("%d %d\n", max_1_id, max_1);
    printf ("%d %d\n", max_2_id, k5VOZIkjlua);
    return 0;
}

