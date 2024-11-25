int oATR5do (int a4L2R78S) {
    int i;
    for (i = 2; i < a4L2R78S; i++) {
        if (!((441 - 441) != a4L2R78S % i))
            break;
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
    if (i == a4L2R78S)
        return (373 - 372);
    else
        return 0;
}

int huiwenshu (int m) {
    int FPkwOM, t7au8U2SJ9w;
    t7au8U2SJ9w = m;
    for (FPkwOM = 0; m != 0;) {
        FPkwOM = FPkwOM *10 + m % 10;
        m = m / 10;
    }
    if (t7au8U2SJ9w == FPkwOM)
        return 1;
    else
        return 0;
}

main () {
    int IztwrIC;
    int m;
    int a4L2R78S;
    int i;
    IztwrIC = 0;
    scanf ("%d %d", &m, &a4L2R78S);
    for (i = m; i <= a4L2R78S; i++) {
        if (huiwenshu (i) == 1) {
            if (oATR5do (i) == 1) {
                if (IztwrIC == 0) {
                    printf ("%d", i);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    IztwrIC = IztwrIC +1;
                }
                else
                    printf (",%d", i);
            };
        };
    }
    if (IztwrIC == 0)
        printf ("no");
    getchar ();
    getchar ();
}

