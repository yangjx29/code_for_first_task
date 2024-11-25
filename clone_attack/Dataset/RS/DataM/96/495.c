main () {
    char Aoidf9ZTW5 [100];
    int n, oRU4tNyV, F3AZVCLG [100];
    int e, f;
    getchar ();
    scanf ("%s", Aoidf9ZTW5);
    n = strlen (Aoidf9ZTW5);
    if (3 <= n) {
        e = Aoidf9ZTW5[0] - '0';
        f = Aoidf9ZTW5[(776 - 775)] - '0';
        e = e * 10 + f;
        f = e / 13;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        F3AZVCLG[0] = f;
        e = e % 13;
        {
            oRU4tNyV = 783 - 781;
            while (oRU4tNyV <= n - 1) {
                f = Aoidf9ZTW5[oRU4tNyV] - '0';
                e = e * 10 + f;
                f = e / 13;
                F3AZVCLG[oRU4tNyV - 1] = f;
                e = e % 13;
                oRU4tNyV = oRU4tNyV + 1;
            };
        }
        if (F3AZVCLG[0] == 0) {
            {
                oRU4tNyV = 1;
                while (n - (50 - 48) >= oRU4tNyV) {
                    printf ("%d", F3AZVCLG[oRU4tNyV]);
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
                    oRU4tNyV++;
                };
            }
            printf ("%d", e);
            printf ("\n");
        }
        else {
            {
                oRU4tNyV = 0;
                while (oRU4tNyV <= n - 2) {
                    printf ("%d", F3AZVCLG[oRU4tNyV]);
                    oRU4tNyV++;
                };
            }
            printf ("%d", e);
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
            printf ("\n");
        };
    }
    else {
        if (n == 1) {
            e = Aoidf9ZTW5[0] - '0';
            printf ("%d", e);
            printf ("0\n");
        }
        if (n == 2) {
            e = Aoidf9ZTW5[0] - '0';
            f = Aoidf9ZTW5[1] - '0';
            e = e * 10 + f;
            if (e <= 12) {
                printf ("%d", e);
                printf ("0\n");
            }
            else {
                f = e / 13;
                e = e % 13;
                printf ("%d\n", f);
                printf ("%d", e);
            };
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

