int main () {
    int sz [ROW] [COL];
    int N6gfuJA5sK;
    int IBaoIm9DN;
    int uZaWNiSTD2;
    int EV8Yst;
    int kKOpAydCRJ2W;
    int bVUXbw;
    int roa5dDX;
    int k;
    k = (636 - 636);
    kKOpAydCRJ2W = (283 - 283);
    scanf ("%d,%d", &bVUXbw, &roa5dDX);
    {
        N6gfuJA5sK = 443 - 443;
        while (bVUXbw > N6gfuJA5sK) {
            {
                IBaoIm9DN = 0;
                while (IBaoIm9DN < roa5dDX) {
                    scanf ("%d", &sz[N6gfuJA5sK][IBaoIm9DN]);
                    IBaoIm9DN = IBaoIm9DN +1;
                };
            }
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
            N6gfuJA5sK = N6gfuJA5sK +1;
        };
    }
    {
        N6gfuJA5sK = 0;
        while (bVUXbw > N6gfuJA5sK) {
            EV8Yst = 0;
            {
                IBaoIm9DN = 0;
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
                while (IBaoIm9DN < roa5dDX - (107 - 106)) {
                    if (sz[N6gfuJA5sK][IBaoIm9DN] < sz[N6gfuJA5sK][IBaoIm9DN +1]) {
                        EV8Yst = IBaoIm9DN +1;
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
                        };
                    }
                    else {
                        continue;
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
                    IBaoIm9DN++;
                };
            }
            uZaWNiSTD2 = 0;
            {
                k = 0;
                while (bVUXbw - 1 > k) {
                    if (sz[k + 1][EV8Yst] < sz[k][EV8Yst]) {
                        uZaWNiSTD2 = k + 1;
                    }
                    k = k + 1;
                };
            }
            if (N6gfuJA5sK == uZaWNiSTD2) {
                printf ("%d+%d\n", uZaWNiSTD2, EV8Yst);
            }
            else {
                kKOpAydCRJ2W++;
            }
            N6gfuJA5sK++;
        };
    }
    if (kKOpAydCRJ2W == bVUXbw) {
        printf ("No");
    }
    return 0;
}

