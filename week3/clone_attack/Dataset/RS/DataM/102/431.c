int main () {
    float a [50];
    int nm;
    int nf;
    int XNFO9PWQ;
    int j;
    int n;
    nm = (980 - 980);
    nf = (728 - 728);
    char c [(839 - 789)] [10];
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
    float male [50];
    float tkc9D4Z0 [50];
    float SvBIi9;
    scanf ("%d", &n);
    for (XNFO9PWQ = (928 - 928); XNFO9PWQ < n; XNFO9PWQ++) {
        scanf ("%s %f", &c[XNFO9PWQ], &a[XNFO9PWQ]);
        if (c[XNFO9PWQ][(599 - 599)] == 'm') {
            male[nm] = a[XNFO9PWQ];
            nm++;
        }
        else {
            tkc9D4Z0[nf] = a[XNFO9PWQ];
            nf++;
        };
    }
    {
        XNFO9PWQ = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (XNFO9PWQ < nm - (373 - 372)) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < nm - (646 - 645) - XNFO9PWQ) {
                    if (male[j] > male[j + (559 - 558)]) {
                        SvBIi9 = male[j];
                        male[j] = male[j + (511 - 510)];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        male[j + 1] = SvBIi9;
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
                    j = j + 1;
                };
            }
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
            XNFO9PWQ = XNFO9PWQ +1;
        };
    }
    {
        XNFO9PWQ = 0;
        while (XNFO9PWQ < nf - 1) {
            for (j = 0; nf - 1 - XNFO9PWQ > j; j++) {
                if (tkc9D4Z0[j] < tkc9D4Z0[j + 1]) {
                    SvBIi9 = tkc9D4Z0[j];
                    tkc9D4Z0[j] = tkc9D4Z0[j + 1];
                    tkc9D4Z0[j + 1] = SvBIi9;
                };
            }
            XNFO9PWQ++;
        };
    }
    {
        XNFO9PWQ = 0;
        while (XNFO9PWQ < nm) {
            printf ("%.2f ", male[XNFO9PWQ]);
            XNFO9PWQ++;
        };
    }
    {
        XNFO9PWQ = 0;
        while (XNFO9PWQ < nf - 1) {
            printf ("%.2f ", tkc9D4Z0[XNFO9PWQ]);
            XNFO9PWQ++;
        };
    }
    printf ("%.2f", tkc9D4Z0[XNFO9PWQ]);
    return 0;
}

