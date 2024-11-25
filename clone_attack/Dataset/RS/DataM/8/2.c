void  qqT9605mgQ (int EgSnXKOf8d6l [], int eRwHdeIYJ4n) {
    int zHzjJ0tdep, pVMXU1, CguN5Ei241, O9u1gWef;
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
        zHzjJ0tdep = 35 - 35;
        while (zHzjJ0tdep < eRwHdeIYJ4n - (394 - 393)) {
            CguN5Ei241 = zHzjJ0tdep;
            {
                pVMXU1 = 174 - 173;
                while (pVMXU1 < eRwHdeIYJ4n) {
                    if (EgSnXKOf8d6l[pVMXU1] < EgSnXKOf8d6l[CguN5Ei241])
                        CguN5Ei241 = pVMXU1;
                    pVMXU1 = pVMXU1 + 1;
                };
            }
            O9u1gWef = EgSnXKOf8d6l[CguN5Ei241];
            EgSnXKOf8d6l[CguN5Ei241] = EgSnXKOf8d6l[zHzjJ0tdep];
            EgSnXKOf8d6l[zHzjJ0tdep] = O9u1gWef;
            zHzjJ0tdep = zHzjJ0tdep + 1;
        };
    };
}

void  YbhTwdEr (int GPGJrbK [], int o0g97h [], int JeES3rHA, int eRwHdeIYJ4n) {
    int zHzjJ0tdep;
    for (zHzjJ0tdep = JeES3rHA; zHzjJ0tdep < JeES3rHA +eRwHdeIYJ4n; zHzjJ0tdep = zHzjJ0tdep + 1)
        GPGJrbK[zHzjJ0tdep] = o0g97h[zHzjJ0tdep - JeES3rHA];
}

main () {
    int EfaeWg2pBDkc [(638 - 598)], Sw9xf7qvuiy [20], YwXMrAo, jh6GPSc5, zHzjJ0tdep;
    scanf ("%d %d", &YwXMrAo, &jh6GPSc5);
    {
        zHzjJ0tdep = 892 - 892;
        while (zHzjJ0tdep < YwXMrAo) {
            scanf ("%d", &EfaeWg2pBDkc[zHzjJ0tdep]);
            zHzjJ0tdep = zHzjJ0tdep + 1;
        };
    }
    qqT9605mgQ (EfaeWg2pBDkc, YwXMrAo);
    {
        zHzjJ0tdep = 142 - 142;
        while (zHzjJ0tdep < jh6GPSc5) {
            scanf ("%d", &Sw9xf7qvuiy[zHzjJ0tdep]);
            zHzjJ0tdep = zHzjJ0tdep + 1;
        };
    }
    qqT9605mgQ (Sw9xf7qvuiy, jh6GPSc5);
    YbhTwdEr (EfaeWg2pBDkc, Sw9xf7qvuiy, YwXMrAo, jh6GPSc5);
    {
        zHzjJ0tdep = 641 - 641;
        while (zHzjJ0tdep < YwXMrAo +jh6GPSc5 - 1) {
            printf ("%d ", EfaeWg2pBDkc[zHzjJ0tdep]);
            zHzjJ0tdep++;
        };
    }
    if (zHzjJ0tdep == YwXMrAo +jh6GPSc5 - 1)
        printf ("%d", EfaeWg2pBDkc[zHzjJ0tdep]);
}

