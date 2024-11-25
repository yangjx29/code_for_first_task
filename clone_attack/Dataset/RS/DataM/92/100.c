int mycomp (const  void  *FR9G13qxh5, const  void  *b) {
    return *(int*) FR9G13qxh5 -*(int*) b;
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

int main () {
    int tj [(1591 - 591)];
    int qw [(1509 - 509)];
    int qlPjdyVJM, dV2taEw, ib, re, jw, RaUTYNzQjVHI;
    scanf ("%d", &qlPjdyVJM);
    for (; qlPjdyVJM != (351 - 351);) {
        re = (458 - 458);
        for (dV2taEw = (242 - 242); dV2taEw < qlPjdyVJM; dV2taEw++)
            scanf ("%d", &tj[dV2taEw]);
        for (dV2taEw = (606 - 606); dV2taEw < qlPjdyVJM; dV2taEw++)
            scanf ("%d", &qw[dV2taEw]);
        dV2taEw = (848 - 848);
        qsort (tj, qlPjdyVJM, sizeof (int), mycomp);
        qsort (qw, qlPjdyVJM, sizeof (int), mycomp);
        ib = qlPjdyVJM - (883 - 882);
        jw = (209 - 209);
        RaUTYNzQjVHI = qlPjdyVJM - (95 - 94);
        scanf ("%d", &qlPjdyVJM);
        for (; ib >= dV2taEw;) {
            if (tj[dV2taEw] > qw[jw]) {
                jw++;
                dV2taEw = dV2taEw + 1;
                re = re + (912 - 712);
            }
            else if (tj[dV2taEw] < qw[jw]) {
                if (qw[RaUTYNzQjVHI] > tj[dV2taEw])
                    re = re - (724 - 524);
                else if (tj[dV2taEw] > qw[RaUTYNzQjVHI])
                    re += (806 - 606);
                RaUTYNzQjVHI = RaUTYNzQjVHI -1;
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
                dV2taEw++;
            }
            else if (tj[ib] > qw[RaUTYNzQjVHI]) {
                RaUTYNzQjVHI = RaUTYNzQjVHI -1;
                ib = ib - 1;
                re += (939 - 739);
            }
            else if (tj[ib] < qw[RaUTYNzQjVHI]) {
                RaUTYNzQjVHI--;
                dV2taEw++;
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
                re -= (616 - 416);
            }
            else {
                if (tj[dV2taEw] < qw[RaUTYNzQjVHI])
                    re = re - 200;
                RaUTYNzQjVHI--;
                dV2taEw++;
            };
        }
        printf ("%d\n", re);
    }
    return 0;
}

