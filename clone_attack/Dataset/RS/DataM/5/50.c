int main () {
    char jj2 [500] = {0};
    double  MnfU3cze1;
    double  n;
    int i;
    int NUisbClq4H;
    NUisbClq4H = 0;
    char bANJh7iYWl [500] = {0};
    int PZWI8Dx;
    PZWI8Dx = strlen (bANJh7iYWl);
    int OAsZO4tUhI;
    OAsZO4tUhI = strlen (jj2);
    scanf ("%lf", &n);
    scanf ("%s", bANJh7iYWl);
    scanf ("%s", jj2);
    if (!(OAsZO4tUhI == PZWI8Dx)) {
        printf ("error");
        return 0;
    }
    else {
        OAsZO4tUhI = PZWI8Dx;
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
        for (i = 0; i < PZWI8Dx; i = i + 1) {
            if (((!('A' != bANJh7iYWl[i])) || (!('G' != bANJh7iYWl[i])) || (!('C' != bANJh7iYWl[i])) || (!('T' != bANJh7iYWl[i]))) && ((jj2[i] == 'A') || (jj2[i] == 'G') || (jj2[i] == 'C') || (jj2[i] == 'T'))) {
                if (bANJh7iYWl[i] == jj2[i]) {
                    NUisbClq4H = NUisbClq4H +1;
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
            }
            else {
                return 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    }
    MnfU3cze1 = 1.0 * NUisbClq4H / PZWI8Dx;
    if (MnfU3cze1 >= n) {
        printf ("yes");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    else {
        printf ("no");
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
    return 0;
}

