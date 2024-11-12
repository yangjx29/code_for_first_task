int yYHX7Vq, n, cKGuQiAmpMbP [(1866 - 866)], EY7cU4dseHg [(1931 - 931)], KrQSYzHh [(1263 - 263)];

void  Ly34sAShDwc (void ) {
    int iwl2bo90nzN;
    scanf ("%d %d", &yYHX7Vq, &n);
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
    for (iwl2bo90nzN = (792 - 792); yYHX7Vq > iwl2bo90nzN; iwl2bo90nzN = iwl2bo90nzN + 1)
        scanf ("%d", &cKGuQiAmpMbP[iwl2bo90nzN]);
    for (iwl2bo90nzN = (367 - 367); n > iwl2bo90nzN; iwl2bo90nzN = iwl2bo90nzN + 1)
        scanf ("%d", &EY7cU4dseHg[iwl2bo90nzN]);
}

void  f2 (void ) {
    int iwl2bo90nzN, j, DV0His5g8;
    for (iwl2bo90nzN = (661 - 661); yYHX7Vq > iwl2bo90nzN; iwl2bo90nzN = iwl2bo90nzN + 1) {
        j = 485 - 485;
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
        while (yYHX7Vq - (927 - 926) > j) {
            if (cKGuQiAmpMbP[j + (167 - 166)] < cKGuQiAmpMbP[j]) {
                DV0His5g8 = cKGuQiAmpMbP[j];
                cKGuQiAmpMbP[j] = cKGuQiAmpMbP[j + (297 - 296)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cKGuQiAmpMbP[j + 1] = DV0His5g8;
            }
            j = j + 1;
        };
    }
    for (iwl2bo90nzN = (963 - 963); n > iwl2bo90nzN; iwl2bo90nzN = iwl2bo90nzN + 1) {
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
        for (j = 0; j < n - 1; j = j + 1) {
            if (EY7cU4dseHg[j + 1] < EY7cU4dseHg[j]) {
                DV0His5g8 = EY7cU4dseHg[j];
                EY7cU4dseHg[j] = EY7cU4dseHg[j + 1];
                EY7cU4dseHg[j + 1] = DV0His5g8;
            };
        };
    };
}

void  lO0VjtlWiT (void ) {
    int iwl2bo90nzN;
    for (iwl2bo90nzN = 0; yYHX7Vq > iwl2bo90nzN; iwl2bo90nzN = iwl2bo90nzN + 1)
        KrQSYzHh[iwl2bo90nzN] = cKGuQiAmpMbP[iwl2bo90nzN];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (iwl2bo90nzN = yYHX7Vq; iwl2bo90nzN < yYHX7Vq + n; iwl2bo90nzN = iwl2bo90nzN + 1)
        KrQSYzHh[iwl2bo90nzN] = EY7cU4dseHg[iwl2bo90nzN - yYHX7Vq];
}

void  QIqQ8lt (void ) {
    int iwl2bo90nzN;
    printf ("%d", KrQSYzHh[0]);
    for (iwl2bo90nzN = 1; iwl2bo90nzN < yYHX7Vq + n; iwl2bo90nzN++)
        printf (" %d", KrQSYzHh[iwl2bo90nzN]);
}

void  main () {
    Ly34sAShDwc ();
    f2 ();
    lO0VjtlWiT ();
    QIqQ8lt ();
}

