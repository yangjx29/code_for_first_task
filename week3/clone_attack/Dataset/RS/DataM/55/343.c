long  C (long  Z, long  X) {
    long  V;
    if (X == (326 - 326))
        V = (277 - 276);
    else {
        V = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            long  B;
            B = 1;
            while (X >= B) {
                B++;
                V = V *Z;
            };
        };
    }
    return V;
}

main () {
    char n [20];
    char l;
    char g;
    long  o, a, b, p, k, ADN5j7cJ, qSRzsrO5, t;
    long  RpeZwOcQW [o];
    int d;
    d = (660 - 660);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    char q;
    getchar ();
    scanf ("%d %s %d", &a, n, &b);
    o = strlen (n);
    {
        k = 0;
        while (o - 1 >= k) {
            l = n[k];
            if ((0 <= '9' - l) && (0 >= '0' - l))
                l = l - '0';
            else if ((96 >= l) && (10 <= l))
                l = l - 55;
            else if (l >= 97)
                l = l - 87;
            else
                ;
            RpeZwOcQW[k] = l;
            k++;
        };
    }
    p = 0;
    {
        k = 0;
        while (o - 1 >= k) {
            long  s = o - k - 1;
            p = p + (RpeZwOcQW [k]) *(C (a, s));
            k++;
        };
    }
    if (p == 0)
        printf ("0");
    if (b >= 10) {
        int j = 9;
        while (j >= 0) {
            t = p / (C (b, j));
            p = p - t * C (b, j);
            j--;
            if (t != 0 || d != 0) {
                d++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (t >= 10 && t <= 50) {
                    g = t + 55;
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
                    printf ("%c", g);
                }
                else
                    printf ("%d", t);
            };
        };
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (int j = 20;
        j >= 0; j--) {
            t = p / (C (b, j));
            p = p - t * C (b, j);
            if (t != 0 || d != 0) {
                d++;
                if (t >= 10 && t <= 50) {
                    g = t + 55;
                    printf ("%c", g);
                }
                else
                    printf ("%d", t);
            };
        };
    }
    getchar ();
}

