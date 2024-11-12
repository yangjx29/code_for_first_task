int main () {
    char MObXN5 [40] [7];
    char kX68f9he [(978 - 977)] [5];
    char p [(460 - 459)] [7];
    double  h, i [(739 - 699)], f [(547 - 507)], a5BmLoJV [40];
    int a, AeIMvz, c, y3PGvN7l = (156 - 156), g = (107 - 107);
    scanf ("%d", &a);
    strcpy (kX68f9he[(972 - 972)], "male");
    {
        AeIMvz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AeIMvz < a) {
            scanf ("%s%lf", MObXN5[AeIMvz], &i[AeIMvz]);
            if (strcmp (kX68f9he[0], MObXN5[AeIMvz])) {
                f[y3PGvN7l] = i[AeIMvz];
                y3PGvN7l++;
            }
            else {
                a5BmLoJV[g] = i[AeIMvz];
                g++;
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
            AeIMvz = AeIMvz +1;
        };
    }
    {
        AeIMvz = 0;
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
        while (AeIMvz < y3PGvN7l) {
            for (c = AeIMvz +1; y3PGvN7l > c; c++) {
                if (f[c] > f[AeIMvz]) {
                    h = f[AeIMvz];
                    f[AeIMvz] = f[c];
                    f[c] = h;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            AeIMvz = AeIMvz +1;
        };
    }
    {
        AeIMvz = 0;
        while (g > AeIMvz) {
            {
                c = AeIMvz +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (c < g) {
                    if (a5BmLoJV[c] < a5BmLoJV[AeIMvz]) {
                        h = a5BmLoJV[AeIMvz];
                        a5BmLoJV[AeIMvz] = a5BmLoJV[c];
                        a5BmLoJV[c] = h;
                    }
                    c++;
                };
            }
            AeIMvz = AeIMvz +1;
        };
    }
    for (AeIMvz = 0; AeIMvz < g; AeIMvz = AeIMvz +1) {
        printf ("%.2lf ", a5BmLoJV[AeIMvz]);
    }
    strcpy (p[0], "female");
    {
        AeIMvz = 0;
        while (AeIMvz < (y3PGvN7l - 1)) {
            printf ("%.2lf ", f[AeIMvz]);
            AeIMvz++;
        };
    }
    printf ("%.2lf", f[y3PGvN7l - 1]);
    return 0;
}

