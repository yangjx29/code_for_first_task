struct   money {
    char OCosEq [20];
    int qm;
    int bj;
    char fszLiFCOI;
    char xb;
    int cBxLylsGi5p;
}
main () {
    struct   money YDZJaSx7Xuo6 [100];
    int Jxgysz;
    int i;
    int p;
    long  a [100] = {(38 - 38)}, max = (881 - 881), sum = 0;
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
    scanf ("%d", &Jxgysz);
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
        while (Jxgysz > i) {
            scanf ("%s %d %d %c %c %d", YDZJaSx7Xuo6[i].OCosEq, &YDZJaSx7Xuo6[i].qm, &YDZJaSx7Xuo6[i].bj, &YDZJaSx7Xuo6[i].fszLiFCOI, &YDZJaSx7Xuo6[i].xb, &YDZJaSx7Xuo6[i].cBxLylsGi5p);
            if (YDZJaSx7Xuo6[i].qm > 80 && 1 <= YDZJaSx7Xuo6[i].cBxLylsGi5p)
                a[i] = a[i] + 8000;
            if (85 < YDZJaSx7Xuo6[i].qm && 80 < YDZJaSx7Xuo6[i].bj)
                a[i] = a[i] + 4000;
            if (YDZJaSx7Xuo6[i].qm > 90)
                a[i] = a[i] + 2000;
            if (85 < YDZJaSx7Xuo6[i].qm && YDZJaSx7Xuo6[i].xb == 'Y')
                a[i] = a[i] + 1000;
            if (YDZJaSx7Xuo6[i].bj > 80 && YDZJaSx7Xuo6[i].fszLiFCOI == 'Y')
                a[i] = a[i] + 850;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < Jxgysz) {
            sum = sum + a[i];
            if (max < a[i])
                max = a[i];
            i = i + 1;
        };
    }
    for (i = 0; i < Jxgysz; i = i + 1)
        if (max == a[i]) {
            p = i;
            break;
        }
    printf ("%s\n%ld\n%ld", YDZJaSx7Xuo6[p].OCosEq, a[p], sum);
}

