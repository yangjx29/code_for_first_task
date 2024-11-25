void  main () {
    int cRuijQs9G (int x);
    int c8AhHZiwzkx (int x);
    int C4Xrb2E6SL3;
    int vZ3z4sSU;
    int n;
    int x;
    C4Xrb2E6SL3 = (270 - 270);
    scanf ("%d %d", &vZ3z4sSU, &n);
    for (x = vZ3z4sSU; n >= x; x++)
        if (cRuijQs9G (x) && c8AhHZiwzkx (x)) {
            if (C4Xrb2E6SL3 != 0)
                printf (",");
            printf ("%d", x);
            C4Xrb2E6SL3 = C4Xrb2E6SL3 +1;
        }
    if (!C4Xrb2E6SL3)
        ;
}

int cRuijQs9G (int x) {
    int c;
    int C4Xrb2E6SL3;
    c = 1;
    {
        C4Xrb2E6SL3 = 2;
        while (C4Xrb2E6SL3 <= sqrt (x)) {
            if (x % C4Xrb2E6SL3 == 0) {
                c = 0;
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
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            C4Xrb2E6SL3 = C4Xrb2E6SL3 +1;
        };
    }
    if (c)
        return 1;
    else
        return 0;
}

int c8AhHZiwzkx (int x) {
    int c;
    int nrfvGwLg [100];
    int t;
    int C4Xrb2E6SL3;
    int k;
    c = 1;
    t = log10 (x);
    k = t;
    {
        C4Xrb2E6SL3 = 0;
        while (C4Xrb2E6SL3 <= t) {
            nrfvGwLg[C4Xrb2E6SL3] = x / pow (10, k);
            x = x - nrfvGwLg[C4Xrb2E6SL3] * pow (10, k);
            C4Xrb2E6SL3++;
            k--;
        };
    }
    {
        C4Xrb2E6SL3 = 0;
        while (C4Xrb2E6SL3 <= t) {
            if (nrfvGwLg[C4Xrb2E6SL3] != nrfvGwLg[t - C4Xrb2E6SL3]) {
                c = 0;
                break;
            }
            C4Xrb2E6SL3++;
        };
    }
    if (c)
        return 1;
    else
        return 0;
}

