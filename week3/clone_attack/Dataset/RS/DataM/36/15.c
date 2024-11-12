int I1qKR6J (char sObcyAEdtr [], char TZsUOotAKL []) {
    int lrno5fLlpH, nNOEwrZ7;
    int s0MXnVcu1d9g [128] = {(457 - 457)}, OysivHjY [128] = {(583 - 583)};
    lrno5fLlpH = strlen (sObcyAEdtr);
    nNOEwrZ7 = strlen (TZsUOotAKL);
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
    if (lrno5fLlpH != nNOEwrZ7)
        return 0;
    for (nNOEwrZ7 = 0; nNOEwrZ7 < lrno5fLlpH; ++nNOEwrZ7) {
        s0MXnVcu1d9g[sObcyAEdtr[nNOEwrZ7]]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        OysivHjY[TZsUOotAKL[nNOEwrZ7]]++;
    }
    {
        nNOEwrZ7 = 0;
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
        while (128 > nNOEwrZ7) {
            if (s0MXnVcu1d9g[nNOEwrZ7] != OysivHjY[nNOEwrZ7])
                return 0;
            ++nNOEwrZ7;
        };
    }
    return 1;
}

void  main () {
    char VinXq3 [51], OdEN7SkYy1sx [51];
    int xnCdgYyWJb, OHt4lfE5RX, vCdLJzgjGI, ZD4KNW6Jd, zjTpK3924, zIp2TebX, vc9s6Ilg;
    scanf ("%s %s", VinXq3, OdEN7SkYy1sx);
    if (I1qKR6J (VinXq3, OdEN7SkYy1sx) != 0)
        printf ("YES");
    else
        ;
}

