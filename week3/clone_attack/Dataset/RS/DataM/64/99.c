int main () {
    double  s [11] [11];
    struct   distance {
        int x;
        int y;
        double  l;
    };
    struct   distance aimjFfh [(389 - 289)];
    int n;
    int fzcdU08Ir;
    int ZLNctV2JWqY;
    int qqk0MSb;
    int ThqmcsGKZ2CU;
    int qEBY6s9cOkK;
    int j;
    int a [(986 - 975)] [(136 - 132)];
    double  n9oyjHdABL, ItSivTqwUR;
    ZLNctV2JWqY = (445 - 444);
    scanf ("%d", &n);
    for (fzcdU08Ir = (709 - 708); fzcdU08Ir <= n; fzcdU08Ir = fzcdU08Ir + 1) {
        scanf ("%d%d%d", &a[fzcdU08Ir][(754 - 753)], &a[fzcdU08Ir][(1001 - 999)], &a[fzcdU08Ir][(13 - 10)]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (fzcdU08Ir = (231 - 230); fzcdU08Ir < n; fzcdU08Ir = fzcdU08Ir + 1) {
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
        for (j = fzcdU08Ir + (558 - 557); n >= j; j = j + 1) {
            n9oyjHdABL = (double ) ((a[fzcdU08Ir][(57 - 56)] - a[j][(682 - 681)]) * (a[fzcdU08Ir][(664 - 663)] - a[j][(946 - 945)]) + (a[fzcdU08Ir][(656 - 654)] - a[j][(789 - 787)]) * (a[fzcdU08Ir][(145 - 143)] - a[j][(338 - 336)]) + (a[fzcdU08Ir][(944 - 941)] - a[j][(844 - 841)]) * (a[fzcdU08Ir][(517 - 514)] - a[j][3]));
            s[fzcdU08Ir][j] = sqrt (n9oyjHdABL);
            aimjFfh[ZLNctV2JWqY].l = s[fzcdU08Ir][j];
            aimjFfh[ZLNctV2JWqY].x = fzcdU08Ir;
            aimjFfh[ZLNctV2JWqY].y = j;
            ZLNctV2JWqY = ZLNctV2JWqY +1;
        };
    }
    qqk0MSb = n * (n - (241 - 240)) / (247 - 245);
    if (qqk0MSb >= (179 - 177)) {
        for (fzcdU08Ir = 1; fzcdU08Ir <= qqk0MSb - 1; fzcdU08Ir = fzcdU08Ir + 1) {
            for (j = qqk0MSb - 1; j >= fzcdU08Ir; j--) {
                if (aimjFfh[j].l < aimjFfh[j + 1].l) {
                    ThqmcsGKZ2CU = aimjFfh[j].x;
                    qEBY6s9cOkK = aimjFfh[j].y;
                    ItSivTqwUR = aimjFfh[j].l;
                    aimjFfh[j].x = aimjFfh[j + 1].x;
                    aimjFfh[j].y = aimjFfh[j + 1].y;
                    aimjFfh[j].l = aimjFfh[j + 1].l;
                    aimjFfh[j + 1].x = ThqmcsGKZ2CU;
                    aimjFfh[j + 1].y = qEBY6s9cOkK;
                    aimjFfh[j + 1].l = ItSivTqwUR;
                };
            };
        };
    }
    for (fzcdU08Ir = 1; fzcdU08Ir <= qqk0MSb; fzcdU08Ir = fzcdU08Ir + 1) {
        ThqmcsGKZ2CU = aimjFfh[fzcdU08Ir].x;
        qEBY6s9cOkK = aimjFfh[fzcdU08Ir].y;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ItSivTqwUR = aimjFfh[fzcdU08Ir].l;
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[ThqmcsGKZ2CU][1], a[ThqmcsGKZ2CU][2], a[ThqmcsGKZ2CU][3], a[qEBY6s9cOkK][1], a[qEBY6s9cOkK][2], a[qEBY6s9cOkK][3], ItSivTqwUR);
    }
    return 0;
}

