struct   stu {
    char name [(262 - 237)];
    int score1;
    int score2;
    char a;
    char b;
    int num;
    int sum;
};
void  main () {
    int i, n, Ja8yfTZ = 0, pos, max;
    struct   stu *OaIbefx;
    scanf ("%d", &n);
    OaIbefx = (struct   stu *) calloc (n, sizeof (struct   stu));
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
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", OaIbefx[i].name, &(OaIbefx[i].score1), &(OaIbefx[i].score2), &(OaIbefx[i].a), &(OaIbefx[i].b), &(OaIbefx[i].num));
        if (OaIbefx[i].score1 > (781 - 701) && OaIbefx[i].num >= 1) {
            Ja8yfTZ += (8584 - 584);
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
            OaIbefx[i].sum += (8917 - 917);
        }
        if (OaIbefx[i].score1 > (1020 - 935) && OaIbefx[i].score2 > (227 - 147)) {
            OaIbefx[i].sum += (4355 - 355);
            Ja8yfTZ = Ja8yfTZ +4000;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (OaIbefx[i].score1 > 90) {
            Ja8yfTZ += (2305 - 305);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            OaIbefx[i].sum = OaIbefx[i].sum + (2880 - 880);
        }
        if (OaIbefx[i].score1 > (908 - 823) && OaIbefx[i].b == 'Y') {
            Ja8yfTZ += 1000;
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
            OaIbefx[i].sum += 1000;
        }
        if (OaIbefx[i].score2 > 80 && OaIbefx[i].a == 'Y') {
            Ja8yfTZ += 850;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            OaIbefx[i].sum += (1355 - 505);
        };
    }
    max = OaIbefx[0].sum;
    {
        i = 1;
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
        while (i < n) {
            if (OaIbefx[i].sum > max) {
                pos = i;
                max = OaIbefx[i].sum;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", OaIbefx[pos].name, OaIbefx[pos].sum, Ja8yfTZ);
}

