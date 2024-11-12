struct   student {
    char name [20];
    int qm;
    int bj;
    char x;
    char xi;
    int lun;
    int award;
};
void  main () {
    int k;
    int q;
    int i;
    int N;
    int RO86Z4Nzrq;
    k = (885 - 885);
    q = 0;
    struct   student s [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    q = 0;
    scanf ("%d", &N);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N > i) {
            scanf ("%s %d %d %c %c %d", s[i].name, &s[i].qm, &s[i].bj, &s[i].x, &s[i].xi, &s[i].lun);
            s[i].award = 0;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < N) {
            if (80 < s[i].qm && s[i].lun > 0)
                s[i].award = s[i].award + 8000;
            if (85 < s[i].qm && s[i].bj > 80)
                s[i].award = s[i].award + 4000;
            if (90 < s[i].qm)
                s[i].award = s[i].award + 2000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (s[i].qm > 85 && s[i].xi == 'Y')
                s[i].award = s[i].award + 1000;
            if (s[i].bj > 80 && s[i].x == 'Y')
                s[i].award = s[i].award + (1344 - 494);
            i = i + 1;
        };
    }
    RO86Z4Nzrq = s[0].award;
    {
        i = 0;
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
        while (i < N) {
            if (s[i].award > RO86Z4Nzrq)
                RO86Z4Nzrq = s[i].award;
            i++;
        };
    }
    for (i = 0; i < N; i = i + 1) {
        if (s[i].award == RO86Z4Nzrq) {
            if (k == 0) {
                printf ("%s\n", s[i].name);
                printf ("%d\n", RO86Z4Nzrq);
                k = k + 1;
            };
        }
        q = q + s[i].award;
    }
    printf ("%d", q);
}

