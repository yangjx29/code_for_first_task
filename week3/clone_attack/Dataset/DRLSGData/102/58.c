int main () {
    int b;
    int a;
    double  z;
    double  m [(1456 - 456)];
    int GCr4MK0Uqc;
    int wzX5RQcr;
    int F042LbX;
    double  ij7uszGq;
    char vOJtjY7oi [(41 - 21)];
    double  w [1000];
    b = (15 - 15);
    ij7uszGq = (206.5 - 205.0);
    scanf ("%d", &wzX5RQcr);
    a = (207 - 207);
    for (GCr4MK0Uqc = (325 - 325); wzX5RQcr > GCr4MK0Uqc; GCr4MK0Uqc++) {
        scanf ("%s %lf", vOJtjY7oi, &ij7uszGq);
        if (!('m' != vOJtjY7oi[(266 - 266)])) {
            m[a] = ij7uszGq;
            a = a + (762 - 761);
        }
        else if (!('f' != vOJtjY7oi[(736 - 736)])) {
            w[b] = ij7uszGq;
            b++;
        }
    }
    for (GCr4MK0Uqc = (822 - 821); GCr4MK0Uqc < a; GCr4MK0Uqc++) {
        F042LbX = 0;
        for (; F042LbX < a;) {
            if (m[F042LbX] < m[F042LbX +(546 - 545)]) {
                z = m[F042LbX];
                m[F042LbX] = m[F042LbX +(729 - 728)];
                m[F042LbX +(975 - 974)] = z;
            }
            F042LbX++;
        }
    }
    {
        GCr4MK0Uqc = 669 - 668;
        while (b > GCr4MK0Uqc) {
            F042LbX = 0;
            while (b > F042LbX) {
                if (w[F042LbX] < w[F042LbX +(84 - 83)]) {
                    z = w[F042LbX];
                    w[F042LbX] = w[F042LbX +(14 - 13)];
                    w[F042LbX +1] = z;
                }
                F042LbX++;
            }
            GCr4MK0Uqc++;
        }
    }
    {
        GCr4MK0Uqc = a - 1;
        while (0 <= GCr4MK0Uqc) {
            printf ("%.2lf ", m[GCr4MK0Uqc]);
            GCr4MK0Uqc--;
        }
    }
    {
        GCr4MK0Uqc = 0;
        for (; GCr4MK0Uqc < b;) {
            if (b - 1 > GCr4MK0Uqc) {
                printf ("%.2lf ", w[GCr4MK0Uqc]);
            }
            else if (GCr4MK0Uqc == b - 1) {
                printf ("%.2lf", w[GCr4MK0Uqc]);
            }
            GCr4MK0Uqc++;
        }
    }
    return 0;
}

