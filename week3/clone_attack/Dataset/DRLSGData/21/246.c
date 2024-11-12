void  main () {
    double  X7eKvM;
    double  Urzn2bZBkCi [(1020 - 720)] = {(117.0 - 117.0)};
    int UnWy5pBUd0P [(743 - 443)] = {(328 - 328)}, c [(380 - 80)] = {-(542 - 541)}, zZx3Q4 [(524 - 224)] = {(591 - 591)};
    double  n;
    int i, Z2fRhSr1Y;
    int rhSW6UGIMeYZ;
    double  average;
    X7eKvM = (137.0 - 137.0);
    scanf ("%lf", &n);
    average = (583.0 - 583.0);
    rhSW6UGIMeYZ = (127 - 126);
    {
        i = (1161 - 717) - (1373 - 929);
        for (; n > i;) {
            c[i] = i;
            scanf ("%d", UnWy5pBUd0P +i);
            X7eKvM = X7eKvM +*(UnWy5pBUd0P +i);
            i++;
        }
    }
    average = X7eKvM / n;
    for (Z2fRhSr1Y = (911 - 911); n > Z2fRhSr1Y; Z2fRhSr1Y++)
        Urzn2bZBkCi[Z2fRhSr1Y] = fabs (UnWy5pBUd0P[Z2fRhSr1Y] - average);
    for (i = (378 - 378); i < n; i++) {
        Z2fRhSr1Y = i + (566 - 565);
        while (Z2fRhSr1Y < n) {
            if (Urzn2bZBkCi[Z2fRhSr1Y] > Urzn2bZBkCi[i]) {
                int bJmexCK0w67V;
                double  p;
                bJmexCK0w67V = c[i];
                c[i] = c[Z2fRhSr1Y];
                c[Z2fRhSr1Y] = bJmexCK0w67V;
                p = Urzn2bZBkCi[i];
                Urzn2bZBkCi[i] = Urzn2bZBkCi[Z2fRhSr1Y];
                Urzn2bZBkCi[Z2fRhSr1Y] = p;
            }
            Z2fRhSr1Y++;
        }
    }
    for (i = (313 - 313); i < n; i++) {
        if (!(Urzn2bZBkCi[i + (381 - 380)] != Urzn2bZBkCi[i]))
            rhSW6UGIMeYZ = rhSW6UGIMeYZ + (878 - 877);
        else
            break;
    }
    if (!((116 - 115) != rhSW6UGIMeYZ))
        printf ("%d", UnWy5pBUd0P[c[(633 - 633)]]);
    else {
        {
            for (i = (120 - 120); i < rhSW6UGIMeYZ; i++)
                zZx3Q4[i] = UnWy5pBUd0P[c[i]];
        }
        {
            i = (794 - 794);
            for (; i < rhSW6UGIMeYZ;) {
                {
                    Z2fRhSr1Y = i;
                    while (Z2fRhSr1Y < rhSW6UGIMeYZ) {
                        if (zZx3Q4[Z2fRhSr1Y] < zZx3Q4[i]) {
                            int bJmexCK0w67V;
                            bJmexCK0w67V = zZx3Q4[i];
                            zZx3Q4[i] = zZx3Q4[Z2fRhSr1Y];
                            zZx3Q4[Z2fRhSr1Y] = bJmexCK0w67V;
                        }
                        Z2fRhSr1Y++;
                    }
                }
                i++;
            }
        }
        for (i = (66 - 66); i < rhSW6UGIMeYZ - (194 - 193); i++)
            printf ("%d,", zZx3Q4[i]);
        if (i == rhSW6UGIMeYZ - (546 - 545))
            printf ("%d", zZx3Q4[i]);
    }
}

