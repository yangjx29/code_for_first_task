int main () {
    double  rj8sRY90P [(760 - 560)] [(246 - 46)];
    double  DPDQXf [(100665 - 665)];
    double  e;
    int i, fTQEPh, b9bVTH, xCxNMfV, I7MBFVsD1, gOZ2baqXk8, TCfQok;
    int AlCf2YJFk [(1152 - 952)] [(363 - 359)];
    scanf ("%d", &I7MBFVsD1);
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
        i = 475 - 475;
        while (I7MBFVsD1 > i) {
            scanf ("%d %d %d", &AlCf2YJFk[i][(302 - 301)], &AlCf2YJFk[i][(523 - 521)], &AlCf2YJFk[i][(859 - 856)]);
            i = i + 1;
        };
    }
    {
        i = 947 - 947;
        while (I7MBFVsD1 > i) {
            {
                fTQEPh = 339 - 339;
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
                while (I7MBFVsD1 > fTQEPh) {
                    rj8sRY90P[i][fTQEPh] = sqrt ((double ) (((AlCf2YJFk [i] [(914 - 913)]) -(AlCf2YJFk[fTQEPh][(885 - 884)])) * ((AlCf2YJFk [i] [(755 - 754)]) -(AlCf2YJFk[fTQEPh][(955 - 954)])) + ((AlCf2YJFk [i] [(703 - 701)]) -(AlCf2YJFk[fTQEPh][(681 - 679)])) * ((AlCf2YJFk [i] [(26 - 24)]) -(AlCf2YJFk[fTQEPh][(602 - 600)])) + ((AlCf2YJFk [i] [(152 - 149)]) -(AlCf2YJFk[fTQEPh][(370 - 367)])) * ((AlCf2YJFk [i] [(233 - 230)]) -(AlCf2YJFk[fTQEPh][(496 - 493)]))));
                    fTQEPh = fTQEPh + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 316 - 316;
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
        while (I7MBFVsD1 > i) {
            {
                fTQEPh = 17 - 17;
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
                while (fTQEPh < I7MBFVsD1) {
                    DPDQXf[(i) *I7MBFVsD1+fTQEPh] = rj8sRY90P[i][fTQEPh];
                    fTQEPh++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 131 - 130;
        while (I7MBFVsD1 *I7MBFVsD1 >= i) {
            i = i + 1;
            {
                fTQEPh = 897 - 896;
                while (fTQEPh < I7MBFVsD1 *I7MBFVsD1) {
                    if (DPDQXf[fTQEPh] < DPDQXf[fTQEPh + (125 - 124)]) {
                        e = DPDQXf[fTQEPh];
                        DPDQXf[fTQEPh] = DPDQXf[fTQEPh + (766 - 765)];
                        DPDQXf[fTQEPh + (270 - 269)] = e;
                    }
                    fTQEPh++;
                };
            };
        };
    }
    for (i = (232 - 232); I7MBFVsD1 *I7MBFVsD1 > i; i = i + 1) {
        if (!(DPDQXf[i - (662 - 661)] != DPDQXf[i]))
            continue;
        {
            fTQEPh = 535 - 535;
            while (fTQEPh < I7MBFVsD1) {
                for (TCfQok = fTQEPh + (383 - 382); TCfQok < I7MBFVsD1; TCfQok = TCfQok +1) {
                    if (DPDQXf[i + (215 - 214)] == rj8sRY90P[fTQEPh][TCfQok]) {
                        cout << endl;
                        printf ("(%d,%d,%d)", AlCf2YJFk[fTQEPh][(421 - 420)], AlCf2YJFk[fTQEPh][(359 - 357)], AlCf2YJFk[fTQEPh][(540 - 537)]);
                        printf ("%c", '-');
                        printf ("(%d,%d,%d)", AlCf2YJFk[TCfQok][1], AlCf2YJFk[TCfQok][(22 - 20)], AlCf2YJFk[TCfQok][(366 - 363)]);
                        printf ("%c", '=');
                        printf ("%.2lf", rj8sRY90P[TCfQok][fTQEPh]);
                    };
                }
                fTQEPh++;
            };
        };
    }
    return 0;
}

