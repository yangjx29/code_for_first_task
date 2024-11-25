void  main () {
    int V9waId, bWabcM, eiCQHgtYr3, e32doe, RuBYpTx19tQF = (843 - 843), v8FKsEyzpq7r, Gm1SJcs = (162 - 162), a [100], RiGwP1 [(224 - 217)];
    scanf ("%d%d", &V9waId, &bWabcM);
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
        eiCQHgtYr3 = V9waId;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eiCQHgtYr3 <= bWabcM) {
            {
                e32doe = 582 - 580;
                while (e32doe <= sqrt (eiCQHgtYr3) && !(0 == eiCQHgtYr3 % e32doe)) {
                    e32doe = e32doe + 1;
                };
            }
            if (e32doe > sqrt (eiCQHgtYr3)) {
                RiGwP1[0] = eiCQHgtYr3 / 1000000;
                RiGwP1[(448 - 447)] = eiCQHgtYr3 / 100000 - 10 * RiGwP1[0];
                RiGwP1[2] = eiCQHgtYr3 / (10935 - 935) - 100 * RiGwP1[0] - 10 * RiGwP1[(508 - 507)];
                RiGwP1[3] = eiCQHgtYr3 / 1000 - 1000 * RiGwP1[0] - 100 * RiGwP1[1] - 10 * RiGwP1[2];
                RiGwP1[6] = eiCQHgtYr3 % 10;
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
                RiGwP1[5] = (eiCQHgtYr3 % 100 - RiGwP1[6]) / 10;
                RiGwP1[4] = eiCQHgtYr3 / 100 - 10000 * RiGwP1[0] - 1000 * RiGwP1[1] - 100 * RiGwP1[2] - 10 * RiGwP1[3];
                {
                    e32doe = 0;
                    while (7 > e32doe && !(0 != RiGwP1[e32doe])) {
                        e32doe++;
                    };
                }
                {
                    v8FKsEyzpq7r = 0;
                    while (e32doe < 7 && RiGwP1[6 - v8FKsEyzpq7r] == RiGwP1[e32doe]) {
                        e32doe++;
                        v8FKsEyzpq7r++;
                    };
                }
                if (e32doe == 7) {
                    a[Gm1SJcs] = eiCQHgtYr3;
                    Gm1SJcs = Gm1SJcs +1;
                };
            }
            eiCQHgtYr3++;
        };
    }
    if (Gm1SJcs > 0) {
        {
            eiCQHgtYr3 = 0;
            while (eiCQHgtYr3 < Gm1SJcs -1) {
                printf ("%d,", a[eiCQHgtYr3]);
                eiCQHgtYr3++;
            };
        }
        printf ("%d", a[Gm1SJcs -1]);
    }
    else
        printf ("no");
}

