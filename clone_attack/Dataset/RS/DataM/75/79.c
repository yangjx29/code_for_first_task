int main () {
    char Vh3zpG0b1Mq;
    int FXENF1zylR [(1248 - 247)], RKHfgiaBZwh [1001], mqQNA0klseWP [(10588 - 587)] = {0}, qKWrFf5Yvn, dHN85Q2I3, gJbYLg, y6JmhL74b, kd7jHsqPZWnb;
    for (qKWrFf5Yvn = 0; !('\n' == Vh3zpG0b1Mq); qKWrFf5Yvn = qKWrFf5Yvn + 1)
        scanf ("%d%c", &FXENF1zylR[qKWrFf5Yvn], &Vh3zpG0b1Mq);
    for (Vh3zpG0b1Mq = 'p', qKWrFf5Yvn = 0; !('\n' == Vh3zpG0b1Mq); qKWrFf5Yvn++)
        scanf ("%d%c", &RKHfgiaBZwh[qKWrFf5Yvn], &Vh3zpG0b1Mq);
    {
        gJbYLg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qKWrFf5Yvn > gJbYLg) {
            {
                dHN85Q2I3 = gJbYLg;
                while (RKHfgiaBZwh[gJbYLg] > dHN85Q2I3) {
                    mqQNA0klseWP[dHN85Q2I3]++;
                    dHN85Q2I3++;
                };
            }
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
            gJbYLg = gJbYLg + 1;
        };
    }
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
    for (gJbYLg = 0, y6JmhL74b = RKHfgiaBZwh[0]; gJbYLg < qKWrFf5Yvn; gJbYLg++) {
        if (RKHfgiaBZwh[gJbYLg] > y6JmhL74b)
            y6JmhL74b = RKHfgiaBZwh[gJbYLg];
    }
    {
        kd7jHsqPZWnb = 0;
        gJbYLg = 0;
        while (gJbYLg < y6JmhL74b) {
            if (kd7jHsqPZWnb < mqQNA0klseWP[gJbYLg])
                kd7jHsqPZWnb = mqQNA0klseWP[gJbYLg];
            gJbYLg++;
        };
    }
    printf ("%d %d", qKWrFf5Yvn, kd7jHsqPZWnb);
    return 0;
}

