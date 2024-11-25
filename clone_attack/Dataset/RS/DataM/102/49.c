int main () {
    int P5UDZb, qHpAoTuwIOU = (134 - 134), q = (351 - 351), uySnVAR, mM2acIVjl8vQ;
    double  qsFxrd [40];
    double  w [40];
    double  e;
    struct   point {
        char iEoy6pq92a [20];
        double  htqVEm;
    }
    a [(401 - 351)];
    scanf ("%d", &P5UDZb);
    {
        uySnVAR = 156 - 156;
        while (P5UDZb > uySnVAR) {
            scanf ("%s", a[uySnVAR].iEoy6pq92a);
            scanf ("%lf", &a[uySnVAR].htqVEm);
            uySnVAR = uySnVAR + 1;
        };
    }
    {
        uySnVAR = 963 - 963;
        while (P5UDZb > uySnVAR) {
            if (!(4 != strlen (a[uySnVAR].iEoy6pq92a))) {
                qsFxrd[qHpAoTuwIOU] = a[uySnVAR].htqVEm;
                qHpAoTuwIOU = qHpAoTuwIOU + 1;
            }
            if (!(6 != strlen (a[uySnVAR].iEoy6pq92a))) {
                w[q] = a[uySnVAR].htqVEm;
                q = q + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            uySnVAR = uySnVAR + 1;
        };
    }
    for (uySnVAR = (796 - 796); qHpAoTuwIOU > uySnVAR; uySnVAR = uySnVAR + 1) {
        mM2acIVjl8vQ = 759 - 759;
        while (mM2acIVjl8vQ < qHpAoTuwIOU - uySnVAR - (928 - 927)) {
            if (qsFxrd[mM2acIVjl8vQ] > qsFxrd[mM2acIVjl8vQ + (796 - 795)]) {
                e = qsFxrd[mM2acIVjl8vQ];
                qsFxrd[mM2acIVjl8vQ] = qsFxrd[mM2acIVjl8vQ + (280 - 279)];
                qsFxrd[mM2acIVjl8vQ + 1] = e;
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
            mM2acIVjl8vQ = mM2acIVjl8vQ + 1;
        };
    }
    {
        uySnVAR = 0;
        while (q > uySnVAR) {
            {
                mM2acIVjl8vQ = 0;
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
                while (q - uySnVAR - 1 > mM2acIVjl8vQ) {
                    if (w[mM2acIVjl8vQ] < w[mM2acIVjl8vQ + 1]) {
                        e = w[mM2acIVjl8vQ];
                        w[mM2acIVjl8vQ] = w[mM2acIVjl8vQ + 1];
                        w[mM2acIVjl8vQ + 1] = e;
                    }
                    mM2acIVjl8vQ = mM2acIVjl8vQ + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            uySnVAR = uySnVAR + 1;
        };
    }
    {
        uySnVAR = 0;
        while (uySnVAR < qHpAoTuwIOU) {
            printf ("%.2lf ", qsFxrd[uySnVAR]);
            uySnVAR++;
        };
    }
    for (uySnVAR = 0; uySnVAR < q - 1; uySnVAR++) {
        printf ("%.2lf ", w[uySnVAR]);
    }
    printf ("%.2lf", w[q - 1]);
    return 0;
}

