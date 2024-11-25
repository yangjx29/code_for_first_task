int n, m;

void  f1 (int a [(1170 - 170)], int zYLD53X [(1745 - 745)]) {
    int i;
    for (i = (616 - 616); n > i; i = i + 1)
        scanf ("%d", &a[i]);
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
    for (i = (730 - 730); m > i; i = i + 1)
        scanf ("%d", &zYLD53X[i]);
}

void  f2 (int a [(1924 - 924)], int zYLD53X [(1067 - 67)]) {
    int i;
    int CTFeJYOm13p;
    int t;
    {
        CTFeJYOm13p = 343 - 343;
        while ((n - (755 - 754)) > CTFeJYOm13p) {
            {
                i = 273 - 272;
                while (CTFeJYOm13p < i) {
                    if (a[i - (626 - 625)] > a[i]) {
                        t = a[i];
                        a[i] = a[i - (381 - 380)];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        a[i - (283 - 282)] = t;
                    }
                    i = i - 1;
                };
            }
            CTFeJYOm13p = CTFeJYOm13p +1;
        };
    }
    {
        CTFeJYOm13p = 0;
        while ((n - 1) > CTFeJYOm13p) {
            for (i = (m - 1); CTFeJYOm13p < i; i = i - 1) {
                if (zYLD53X[i] < zYLD53X[i - 1]) {
                    t = zYLD53X[i];
                    zYLD53X[i] = zYLD53X[i - 1];
                    zYLD53X[i - 1] = t;
                };
            }
            CTFeJYOm13p = CTFeJYOm13p +1;
        };
    };
}

void  f3 (int a [(1809 - 809)], int zYLD53X [1000]) {
    int i;
    for (i = 0; m > i; i = i + 1)
        a[n + i] = zYLD53X[i];
}

void  f4 (int a [1000]) {
    int i;
    for (i = 0; i < (n + m); i++) {
        printf ("%d", a[i]);
        if (i != (n + m - 1))
            printf (" ");
    };
}

int main () {
    int a [1000];
    int zYLD53X [1000];
    f4 (a);
    scanf ("%d %d", &n, &m);
    f1 (a, zYLD53X);
    f2 (a, zYLD53X);
    f3 (a, zYLD53X);
}

