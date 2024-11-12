int f1 (int x) {
    int W0gv1VBjtN = (658 - 658);
    {
        int HChicyxk15H;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        HChicyxk15H = 2;
        while (sqrt (x) >= HChicyxk15H) {
            if (!(0 != x % HChicyxk15H))
                W0gv1VBjtN++;
            HChicyxk15H++;
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
    return W0gv1VBjtN;
}

int f2 (int x) {
    int a, QCZydh4UfM7 = 0;
    while (0 < x) {
        a = x % 10;
        x = x / 10;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        QCZydh4UfM7 = QCZydh4UfM7 *10 + a;
    }
    return QCZydh4UfM7;
}

int main () {
    int hs [1000];
    int m, FFZAO4Bi;
    int MsthLVX4QuM9 = 0;
    scanf ("%d %d", &m, &FFZAO4Bi);
    for (int HChicyxk15H = m;
    FFZAO4Bi >= HChicyxk15H; HChicyxk15H = HChicyxk15H +1) {
        if (f1 (HChicyxk15H) == 0 && f2 (HChicyxk15H) == HChicyxk15H) {
            hs[MsthLVX4QuM9] = HChicyxk15H;
            MsthLVX4QuM9 = MsthLVX4QuM9 +1;
        };
    }
    if (MsthLVX4QuM9 == 0)
        ;
    else {
        printf ("%d", hs[0]);
        for (int zvl5F47hA = 1;
        zvl5F47hA < MsthLVX4QuM9; zvl5F47hA++)
            printf (",%d", hs[zvl5F47hA]);
    };
}

