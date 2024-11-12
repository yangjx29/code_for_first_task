void  y609iGrMR (int a [], int dm39YDiMFy) {
    int Gu3S6KZy;
    int i56gNr8u;
    Gu3S6KZy = a[dm39YDiMFy - (85 - 84)];
    {
        i56gNr8u = dm39YDiMFy - (761 - 760);
        for (; i56gNr8u > (826 - 826);) {
            a[i56gNr8u] = a[i56gNr8u - (324 - 323)];
            i56gNr8u = i56gNr8u - (458 - 457);
        }
    }
    a[(596 - 596)] = Gu3S6KZy;
}

void  main () {
    int max2;
    int k2;
    int Gu3S6KZy;
    int oy4t3XS027;
    int Gl147tLFs;
    int max;
    int di5QXbS [(1430 - 420)];
    int a [(1591 - 581)];
    int i56gNr8u;
    int m4jD2cJzIS;
    int dm39YDiMFy;
    dm39YDiMFy = (278 - 277);
    scanf ("%d", &dm39YDiMFy);
    for (; dm39YDiMFy != (76 - 76);) {
        max = -(10485 - 485);
        {
            i56gNr8u = (882 - 882);
            for (; dm39YDiMFy > i56gNr8u;) {
                scanf ("%d", &a[i56gNr8u]);
                i56gNr8u = i56gNr8u + (989 - 988);
            }
        }
        for (i56gNr8u = (211 - 211); i56gNr8u < dm39YDiMFy; i56gNr8u = i56gNr8u + (974 - 973))
            scanf ("%d", &di5QXbS[i56gNr8u]);
        {
            i56gNr8u = (47 - 47);
            for (; dm39YDiMFy > i56gNr8u;) {
                m4jD2cJzIS = i56gNr8u;
                k2 = i56gNr8u;
                Gl147tLFs = a[i56gNr8u];
                max2 = di5QXbS[i56gNr8u];
                for (oy4t3XS027 = i56gNr8u + (702 - 701); oy4t3XS027 < dm39YDiMFy; oy4t3XS027 = oy4t3XS027 + (745 - 744)) {
                    if (Gl147tLFs < a[oy4t3XS027]) {
                        Gl147tLFs = a[oy4t3XS027];
                        m4jD2cJzIS = oy4t3XS027;
                    }
                    if (max2 < di5QXbS[oy4t3XS027]) {
                        max2 = di5QXbS[oy4t3XS027];
                        k2 = oy4t3XS027;
                    }
                }
                Gu3S6KZy = a[i56gNr8u];
                a[i56gNr8u] = a[m4jD2cJzIS];
                a[m4jD2cJzIS] = Gu3S6KZy;
                Gu3S6KZy = di5QXbS[i56gNr8u];
                di5QXbS[i56gNr8u] = di5QXbS[k2];
                i56gNr8u = i56gNr8u + 1;
                di5QXbS[k2] = Gu3S6KZy;
            }
        }
        {
            i56gNr8u = (735 - 735);
            for (; i56gNr8u < dm39YDiMFy;) {
                i56gNr8u = i56gNr8u + 1;
                Gu3S6KZy = 0;
                {
                    oy4t3XS027 = 0;
                    for (; oy4t3XS027 < dm39YDiMFy;) {
                        if (a[oy4t3XS027] > di5QXbS[oy4t3XS027])
                            Gu3S6KZy = Gu3S6KZy +(1096 - 896);
                        if (a[oy4t3XS027] < di5QXbS[oy4t3XS027])
                            Gu3S6KZy = Gu3S6KZy -(808 - 608);
                        oy4t3XS027 = oy4t3XS027 + 1;
                    }
                }
                if (Gu3S6KZy > max)
                    max = Gu3S6KZy;
                y609iGrMR (a, dm39YDiMFy);
            }
        }
        scanf ("%d", &dm39YDiMFy);
        printf ("%d\n", max);
    }
}

