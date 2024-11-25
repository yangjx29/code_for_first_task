int main () {
    char rkEGjthol [10], AYuENZIPm [5] = {"male"}, e [7] = {"female"};
    double  bqoNPehY;
    double  p;
    double  b [(592 - 552)];
    double  c [40];
    int t3KNx4fG;
    int k;
    int m9pwXgTPOWoV;
    int Vt0MpHBZXGF;
    int yv5WPACFc1X;
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
    t3KNx4fG = (975 - 974);
    k = (977 - 976);
    scanf ("%d", &m9pwXgTPOWoV);
    {
        Vt0MpHBZXGF = 869 - 868;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Vt0MpHBZXGF <= m9pwXgTPOWoV) {
            scanf ("\n%s", rkEGjthol);
            scanf ("%lf", &bqoNPehY);
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
            if (strcmp (rkEGjthol, AYuENZIPm) == 0) {
                b[t3KNx4fG] = bqoNPehY;
                t3KNx4fG += 1;
                continue;
            }
            Vt0MpHBZXGF = Vt0MpHBZXGF +1;
            if (strcmp (rkEGjthol, e) == 0) {
                c[k] = bqoNPehY;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = k + 1;
            };
        };
    }
    t3KNx4fG = t3KNx4fG - 1;
    for (Vt0MpHBZXGF = 1; Vt0MpHBZXGF <= t3KNx4fG; Vt0MpHBZXGF++)
        for (yv5WPACFc1X = Vt0MpHBZXGF; yv5WPACFc1X <= t3KNx4fG; yv5WPACFc1X = yv5WPACFc1X + 1)
            if (b[Vt0MpHBZXGF] > b[yv5WPACFc1X]) {
                p = b[Vt0MpHBZXGF];
                b[Vt0MpHBZXGF] = b[yv5WPACFc1X];
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
                b[yv5WPACFc1X] = p;
            }
    k = k - 1;
    for (Vt0MpHBZXGF = 1; Vt0MpHBZXGF <= k; Vt0MpHBZXGF++)
        for (yv5WPACFc1X = Vt0MpHBZXGF; yv5WPACFc1X <= k; yv5WPACFc1X++)
            if (c[Vt0MpHBZXGF] < c[yv5WPACFc1X]) {
                p = c[Vt0MpHBZXGF];
                c[Vt0MpHBZXGF] = c[yv5WPACFc1X];
                c[yv5WPACFc1X] = p;
            }
    {
        Vt0MpHBZXGF = 1;
        while (Vt0MpHBZXGF <= t3KNx4fG) {
            printf ("%.2lf ", b[Vt0MpHBZXGF]);
            Vt0MpHBZXGF++;
        };
    }
    {
        Vt0MpHBZXGF = 1;
        while (Vt0MpHBZXGF < k) {
            printf ("%.2lf ", c[Vt0MpHBZXGF]);
            Vt0MpHBZXGF++;
        };
    }
    printf ("%.2lf", c[k]);
    return 0;
}

