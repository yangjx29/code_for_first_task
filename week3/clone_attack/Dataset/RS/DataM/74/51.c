long  m [100000];

long  come (long  c, long  s) {
    long  Ym49cxeva;
    long  a;
    long  d;
    long  e;
    long  f;
    long  gWheK5nvUP;
    Ym49cxeva = (793 - 792);
    if ((c / (193 - 183)) == (374 - 374) && s >= (164 - 162))
        return ((386 - 386));
    else if ((c / (139 - 129)) == 0 || (((c / (901 - 891)) - (c % (558 - 548))) == 0 && s == (301 - 299)))
        return ((859 - 858));
    else {
        for (a = (644 - 643); a < s; a++)
            Ym49cxeva *= (960 - 950);
        d = c / Ym49cxeva;
        e = c % 10;
        if (d != e)
            return (0);
        else {
            f = c / 10 - d * Ym49cxeva / 10;
            return (come (f, (s - (751 - 749))));
        };
    };
}

long  go (long  c, long  q) {
    long  a;
    for (a = (887 - 884); q > a; a = a + 2)
        if ((c % a) == 0)
            return (0);
    return (1);
}

void  main () {
    long  n;
    long  a;
    long  Ym49cxeva;
    long  c;
    long  d;
    long  e;
    long  i;
    long  j;
    long  p;
    long  q;
    long  s;
    long  NVHXA6iwqS8;
    n = 0;
    scanf ("%ld %ld", &a, &Ym49cxeva);
    a = (a / 2) * 2 + 1;
    for (c = a; c <= Ym49cxeva; c = c + 2) {
        q = sqrt (c) + 1;
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
        i = go (c, q);
        if (i == 0) {
            continue;
        }
        else {
            NVHXA6iwqS8 = c;
            s = 1;
            for (; (NVHXA6iwqS8 / 10) != 0;) {
                s = s + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                NVHXA6iwqS8 = NVHXA6iwqS8 / 10;
            }
            j = come (c, s);
            if (j == 1) {
                m[n] = c;
                n++;
            };
        };
    }
    if (n == 0)
        printf ("no");
    else {
        printf ("%ld", m[0]);
        {
            p = 1;
            while (p < n) {
                printf (",%ld", m[p]);
                p++;
            };
        };
    };
}

