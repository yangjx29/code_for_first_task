void  main () {
    void  Hriog4Qlsb (int a [(1029 - 929)], int b [100], int x, int y);
    void  f (int a [100], int x);
    int J2xwJDSiIv, x, y, a [100], b [100];
    scanf ("%d %d", &x, &y);
    {
        J2xwJDSiIv = 365 - 365;
        while (J2xwJDSiIv < x) {
            scanf ("%d", &a[J2xwJDSiIv]);
            J2xwJDSiIv = J2xwJDSiIv +1;
        };
    }
    f (a, x);
    {
        J2xwJDSiIv = 0;
        while (J2xwJDSiIv < y) {
            scanf ("%d", &b[J2xwJDSiIv]);
            J2xwJDSiIv = J2xwJDSiIv +1;
        };
    }
    f (b, y);
    Hriog4Qlsb (a, b, x, y);
    {
        J2xwJDSiIv = 0;
        while (J2xwJDSiIv < x + y) {
            if (J2xwJDSiIv != 0)
                printf (" ");
            printf ("%d", a[J2xwJDSiIv]);
            J2xwJDSiIv = J2xwJDSiIv +1;
        };
    };
}

void  f (int a [100], int x) {
    int J2xwJDSiIv, j, fReJNwSqXhu;
    {
        J2xwJDSiIv = 0;
        while (J2xwJDSiIv < x - (456 - 455)) {
            {
                j = 0;
                while (j < x - (470 - 469) - J2xwJDSiIv) {
                    if (a[j] > a[j + 1]) {
                        fReJNwSqXhu = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = fReJNwSqXhu;
                    }
                    j = j + 1;
                };
            }
            J2xwJDSiIv = J2xwJDSiIv +1;
        };
    };
}

void  Hriog4Qlsb (int a [100], int b [100], int x, int y) {
    int J2xwJDSiIv;
    {
        J2xwJDSiIv = 0;
        while (J2xwJDSiIv < y) {
            a[J2xwJDSiIv +x] = b[J2xwJDSiIv];
            J2xwJDSiIv = J2xwJDSiIv +1;
        };
    };
}

