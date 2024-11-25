int l7mG4e3k5l (int kqpR0OH [5] [5], int xPES0vyHI, int m) {
    int *w1TbBjMocfl;
    int *num_n;
    int i;
    if (!(0 <= xPES0vyHI && 4 >= xPES0vyHI && m >= 0 && m <= 4))
        return 0;
    num_n = &kqpR0OH[xPES0vyHI][0];
    w1TbBjMocfl = &kqpR0OH[m][0];
    {
        i = 0;
        while (5 > i) {
            i++;
            *num_n = *num_n ^ (*w1TbBjMocfl);
            *w1TbBjMocfl = *w1TbBjMocfl ^ (*num_n);
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
            *num_n = *num_n ^ (*w1TbBjMocfl);
            num_n++;
            w1TbBjMocfl++;
        };
    }
    return 1;
}

int main () {
    int xPES0vyHI, m;
    int i, BoOTMc;
    int kqpR0OH [5] [5];
    for (i = 0; i < 5; i++) {
        BoOTMc = 0;
        while (BoOTMc < 5) {
            scanf ("%d", &kqpR0OH[i][BoOTMc]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            BoOTMc = BoOTMc +1;
        };
    }
    scanf ("%d %d", &xPES0vyHI, &m);
    if (l7mG4e3k5l (kqpR0OH, xPES0vyHI, m)) {
        for (i = 0; i < 5; i++) {
            if (i > 0)
                ;
            {
                BoOTMc = 0;
                while (BoOTMc < 5) {
                    if (BoOTMc > 0)
                        ;
                    printf ("%d", kqpR0OH[i][BoOTMc]);
                    BoOTMc++;
                };
            };
        };
    }
    else
        ;
    return 0;
}

