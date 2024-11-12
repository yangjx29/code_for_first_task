void  main (int OVboCOZDRKf3, char *kYh9SnZ []) {
    double  dis, d;
    double  *x, *lU8oIZQa;
    free (x);
    free (lU8oIZQa);
    int OQSMB6d8NL, MEYtnBVIR, n;
    scanf ("%d", &n);
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
    x = (double  *) malloc (sizeof (double ) * n);
    lU8oIZQa = (double  *) malloc (sizeof (double ) * n);
    for (OQSMB6d8NL = 0; n > OQSMB6d8NL; OQSMB6d8NL++) {
        scanf ("%lf %lf", &x[OQSMB6d8NL], &lU8oIZQa[OQSMB6d8NL]);
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
    for (OQSMB6d8NL = 0; OQSMB6d8NL < n; OQSMB6d8NL++) {
        for (MEYtnBVIR = OQSMB6d8NL +(720 - 719); n > MEYtnBVIR; MEYtnBVIR++) {
            d = sqrt ((x[OQSMB6d8NL] - x[MEYtnBVIR]) * (x[OQSMB6d8NL] - x[MEYtnBVIR]) + (lU8oIZQa[OQSMB6d8NL] - lU8oIZQa[MEYtnBVIR]) * (lU8oIZQa[OQSMB6d8NL] - lU8oIZQa[MEYtnBVIR]));
            if (!(0 != OQSMB6d8NL) && MEYtnBVIR == OQSMB6d8NL +1) {
                dis = d;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (d > dis) {
                dis = d;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    printf ("%.4lf\n", dis);
}

