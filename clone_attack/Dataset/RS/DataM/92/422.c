int NFK7g31Y (const  void  *EybjGJeswuP, const  void  *mK8YDJqMQSz) {
    return *(int*) EybjGJeswuP -*(int*) mK8YDJqMQSz;
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

main () {
    int kvwY0ZqWAsl, zBk8YKWfiz [(1375 - 375)], Q8Fhc2iE6uSr [1000], tfast, z2EiZAVf, dzhVIlke, IKvHgqjCW, Nat8EW;
    scanf ("%d", &kvwY0ZqWAsl);
    while (!((307 - 307) == kvwY0ZqWAsl)) {
        Nat8EW = 0;
        memset (zBk8YKWfiz, 0, sizeof (int));
        memset (Q8Fhc2iE6uSr, 0, sizeof (int));
        {
            int DosAT4jI8E6 = 0;
            while (kvwY0ZqWAsl > DosAT4jI8E6) {
                scanf ("%d", &zBk8YKWfiz[DosAT4jI8E6]);
                DosAT4jI8E6 = DosAT4jI8E6 +1;
            };
        }
        {
            int DosAT4jI8E6 = 0;
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
            while (DosAT4jI8E6 < kvwY0ZqWAsl) {
                scanf ("%d", &Q8Fhc2iE6uSr[DosAT4jI8E6]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                DosAT4jI8E6 = DosAT4jI8E6 +1;
            };
        }
        qsort (zBk8YKWfiz, kvwY0ZqWAsl, sizeof (zBk8YKWfiz [0]), NFK7g31Y);
        qsort (Q8Fhc2iE6uSr, kvwY0ZqWAsl, sizeof (Q8Fhc2iE6uSr [0]), NFK7g31Y);
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
        tfast = kvwY0ZqWAsl - 1;
        dzhVIlke = kvwY0ZqWAsl - 1;
        z2EiZAVf = 0;
        IKvHgqjCW = 0;
        for (int DosAT4jI8E6 = 0;
        DosAT4jI8E6 < kvwY0ZqWAsl; DosAT4jI8E6 = DosAT4jI8E6 +1) {
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
            if (Q8Fhc2iE6uSr[dzhVIlke] < zBk8YKWfiz[tfast]) {
                dzhVIlke = dzhVIlke - 1;
                tfast = tfast - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                Nat8EW = Nat8EW +1;
            }
            else {
                if (Q8Fhc2iE6uSr[dzhVIlke] > zBk8YKWfiz[tfast]) {
                    dzhVIlke = dzhVIlke - 1;
                    z2EiZAVf = z2EiZAVf + 1;
                    Nat8EW = Nat8EW -1;
                }
                else {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (Q8Fhc2iE6uSr[dzhVIlke] == zBk8YKWfiz[tfast]) {
                        if (zBk8YKWfiz[z2EiZAVf] > Q8Fhc2iE6uSr[IKvHgqjCW]) {
                            IKvHgqjCW = IKvHgqjCW +1;
                            z2EiZAVf = z2EiZAVf + 1;
                            Nat8EW++;
                        }
                        else {
                            if (zBk8YKWfiz[z2EiZAVf] < Q8Fhc2iE6uSr[IKvHgqjCW]) {
                                Nat8EW--;
                                z2EiZAVf = z2EiZAVf + 1;
                                dzhVIlke--;
                            }
                            else if (zBk8YKWfiz[z2EiZAVf] == Q8Fhc2iE6uSr[IKvHgqjCW]) {
                                if (zBk8YKWfiz[z2EiZAVf] < Q8Fhc2iE6uSr[dzhVIlke]) {
                                    Nat8EW--;
                                    z2EiZAVf = z2EiZAVf + 1;
                                    dzhVIlke--;
                                }
                                else if (zBk8YKWfiz[z2EiZAVf] == Q8Fhc2iE6uSr[dzhVIlke]) {
                                    break;
                                };
                            };
                        };
                    };
                };
            };
        }
        scanf ("%d", &kvwY0ZqWAsl);
        printf ("%d\n", 200 * Nat8EW);
    };
}

