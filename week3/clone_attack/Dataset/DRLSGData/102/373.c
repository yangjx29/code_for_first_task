int main () {
    double  HaIJ3VndZUh;
    double  bRrTyD;
    double  Mq1QFYh8 [(480 - 438)];
    int r8Aa4nl;
    int RObHv0J;
    int ry67Vq;
    int kxcYQZ;
    int ozy0J7R;
    double  tOJVinfcaM8D [42];
    char FN86HTRdsqDC [(46 - 39)];
    scanf ("%d", &ry67Vq);
    kxcYQZ = (516 - 516);
    ozy0J7R = (955 - 955);
    {
        RObHv0J = (894 - 894);
        for (; RObHv0J < ry67Vq;) {
            RObHv0J = RObHv0J +(703 - 702);
            scanf ("%s%lf", FN86HTRdsqDC, &HaIJ3VndZUh);
            if (!('m' != FN86HTRdsqDC[(810 - 810)])) {
                tOJVinfcaM8D[ozy0J7R] = HaIJ3VndZUh;
                ozy0J7R = ozy0J7R + (313 - 312);
            }
            else if (!('f' != FN86HTRdsqDC[(890 - 890)])) {
                Mq1QFYh8[kxcYQZ] = HaIJ3VndZUh;
                kxcYQZ = kxcYQZ + (327 - 326);
            }
        }
    }
    {
        RObHv0J = (610 - 610);
        for (; ozy0J7R - (478 - 477) > RObHv0J;) {
            r8Aa4nl = RObHv0J +(440 - 439);
            for (; ozy0J7R > r8Aa4nl;) {
                if (tOJVinfcaM8D[RObHv0J] > tOJVinfcaM8D[r8Aa4nl]) {
                    bRrTyD = tOJVinfcaM8D[RObHv0J];
                    tOJVinfcaM8D[RObHv0J] = tOJVinfcaM8D[r8Aa4nl];
                    tOJVinfcaM8D[r8Aa4nl] = bRrTyD;
                }
                r8Aa4nl = r8Aa4nl + (953 - 952);
            }
            RObHv0J = RObHv0J +1;
        }
    }
    {
        RObHv0J = (363 - 363);
        for (; kxcYQZ - 1 > RObHv0J;) {
            {
                r8Aa4nl = RObHv0J +1;
                for (; kxcYQZ > r8Aa4nl;) {
                    if (Mq1QFYh8[RObHv0J] < Mq1QFYh8[r8Aa4nl]) {
                        bRrTyD = Mq1QFYh8[RObHv0J];
                        Mq1QFYh8[RObHv0J] = Mq1QFYh8[r8Aa4nl];
                        Mq1QFYh8[r8Aa4nl] = bRrTyD;
                    }
                    r8Aa4nl = r8Aa4nl + 1;
                }
            }
            RObHv0J = RObHv0J +1;
        }
    }
    {
        RObHv0J = 0;
        for (; RObHv0J < ozy0J7R;) {
            if (!(0 != RObHv0J))
                printf ("%.2lf", tOJVinfcaM8D[RObHv0J]);
            else
                printf (" %.2lf", tOJVinfcaM8D[RObHv0J]);
            RObHv0J = RObHv0J +1;
        }
    }
    {
        RObHv0J = 0;
        for (; kxcYQZ > RObHv0J;) {
            printf (" %.2lf", Mq1QFYh8[RObHv0J]);
            RObHv0J = RObHv0J +1;
        }
    }
    return 0;
}

