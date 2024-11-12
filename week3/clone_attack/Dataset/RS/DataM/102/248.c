int main () {
    double  t = 0;
    struct   p {
        char sex [7];
        double  QePuBIM;
    }
    p [40];
    double  RnVHpsOz [40], b [40], OLmyvztEF2fj [40];
    int NWPMLbDUqXOB, kNF8eRkm7C, j = (168 - 168), k = (955 - 955), h;
    scanf ("%d", &NWPMLbDUqXOB);
    {
        kNF8eRkm7C = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kNF8eRkm7C < NWPMLbDUqXOB) {
            scanf ("%s%lf", p[kNF8eRkm7C].sex, &p[kNF8eRkm7C].QePuBIM);
            kNF8eRkm7C = kNF8eRkm7C + 1;
        };
    }
    for (kNF8eRkm7C = 0; kNF8eRkm7C < NWPMLbDUqXOB; kNF8eRkm7C++) {
        if (strcmp (p[kNF8eRkm7C].sex, "male") == 0) {
            RnVHpsOz[j] = p[kNF8eRkm7C].QePuBIM;
            j = j + 1;
        }
        else {
            b[k] = p[kNF8eRkm7C].QePuBIM;
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
            k = k + 1;
        };
    }
    {
        h = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (h < j) {
            h++;
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
            {
                kNF8eRkm7C = 0;
                while (kNF8eRkm7C < j - 1) {
                    if (RnVHpsOz[kNF8eRkm7C + 1] < RnVHpsOz[kNF8eRkm7C]) {
                        t = RnVHpsOz[kNF8eRkm7C];
                        RnVHpsOz[kNF8eRkm7C] = RnVHpsOz[kNF8eRkm7C + 1];
                        RnVHpsOz[kNF8eRkm7C + 1] = t;
                    }
                    kNF8eRkm7C = kNF8eRkm7C + 1;
                };
            };
        };
    }
    {
        h = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (h < k) {
            h++;
            {
                kNF8eRkm7C = 0;
                while (kNF8eRkm7C < k - 1) {
                    if (b[kNF8eRkm7C] < b[kNF8eRkm7C + 1]) {
                        t = b[kNF8eRkm7C];
                        b[kNF8eRkm7C] = b[kNF8eRkm7C + 1];
                        b[kNF8eRkm7C + 1] = t;
                    }
                    kNF8eRkm7C = kNF8eRkm7C + 1;
                };
            };
        };
    }
    {
        kNF8eRkm7C = 0;
        while (j > kNF8eRkm7C) {
            OLmyvztEF2fj[kNF8eRkm7C] = RnVHpsOz[kNF8eRkm7C];
            kNF8eRkm7C++;
        };
    }
    {
        kNF8eRkm7C = j;
        while (kNF8eRkm7C < NWPMLbDUqXOB) {
            OLmyvztEF2fj[kNF8eRkm7C] = b[kNF8eRkm7C - j];
            kNF8eRkm7C++;
        };
    }
    printf ("%.2lf", OLmyvztEF2fj[0]);
    for (kNF8eRkm7C = 1; kNF8eRkm7C < NWPMLbDUqXOB; kNF8eRkm7C++) {
        printf (" %.2lf", OLmyvztEF2fj[kNF8eRkm7C]);
    }
    return 0;
}

