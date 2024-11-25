struct   point {
    double  LigVMkuJ;
    double  y;
};
double  dis (struct   point a, struct   point b) {
    return ((a.LigVMkuJ - b.LigVMkuJ) * (a.LigVMkuJ - b.LigVMkuJ) + (a.y - b.y) * (a.y - b.y));
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
}

void  main () {
    struct   point c04QTe [100];
    int i;
    int lzwu4LSj;
    int ycrBLszHW;
    double  max;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &ycrBLszHW);
    {
        i = 731 - 731;
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
        while (ycrBLszHW > i) {
            scanf ("%lf%lf", &c04QTe[i].LigVMkuJ, &c04QTe[i].y);
            i = i + 1;
        };
    }
    max = dis (c04QTe[(361 - 361)], c04QTe[(487 - 486)]);
    for (i = 0; i < ycrBLszHW; i++) {
        lzwu4LSj = i + 1;
        while (ycrBLszHW > lzwu4LSj) {
            if (dis (c04QTe[i], c04QTe[lzwu4LSj]) > max)
                max = dis (c04QTe[i], c04QTe[lzwu4LSj]);
            lzwu4LSj = lzwu4LSj + 1;
        };
    }
    printf ("%.4f", sqrt (max));
}

