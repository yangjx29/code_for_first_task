void  main () {
    for (; 1;) {
        int FeBgL9RjF5;
        int KavbPVIrRi;
        int BtCLvim;
        int a [1024] = {(411 - 411)};
        int b [1024] = {0};
        int choose [1024] = {0};
        int bchoose [1024] = {0};
        int IWdqOoS2h;
        int deuce;
        int unehMTRKGE;
        IWdqOoS2h = 0;
        deuce = 0;
        unehMTRKGE = 0;
        int money;
        money = 200 * IWdqOoS2h -(unehMTRKGE)*200;
        int PTCp7ImH;
        int hOasmeEgUkb;
        int taila;
        int i9ihkmuEn5F;
        PTCp7ImH = 0;
        hOasmeEgUkb = 0;
        taila = BtCLvim -1;
        i9ihkmuEn5F = BtCLvim -1;
        scanf ("%d", &BtCLvim);
        if (BtCLvim == 0)
            break;
        {
            FeBgL9RjF5 = 0;
            while (FeBgL9RjF5 < BtCLvim) {
                scanf ("%d", &a[FeBgL9RjF5]);
                FeBgL9RjF5++;
            };
        }
        for (FeBgL9RjF5 = 0; FeBgL9RjF5 < BtCLvim; FeBgL9RjF5++) {
            scanf ("%d", &b[FeBgL9RjF5]);
            choose[FeBgL9RjF5] = BtCLvim;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            bchoose[FeBgL9RjF5] = 0;
        }
        {
            FeBgL9RjF5 = 0;
            while (FeBgL9RjF5 < BtCLvim -1) {
                for (KavbPVIrRi = FeBgL9RjF5 +1; KavbPVIrRi <= BtCLvim -1; KavbPVIrRi++) {
                    if (a[KavbPVIrRi] >= a[FeBgL9RjF5]) {
                        int temp;
                        temp = a[KavbPVIrRi];
                        a[KavbPVIrRi] = a[FeBgL9RjF5];
                        a[FeBgL9RjF5] = temp;
                    }
                    if (b[KavbPVIrRi] >= b[FeBgL9RjF5]) {
                        int temp;
                        temp = b[KavbPVIrRi];
                        b[KavbPVIrRi] = b[FeBgL9RjF5];
                        b[FeBgL9RjF5] = temp;
                    };
                }
                FeBgL9RjF5++;
            };
        }
        while (PTCp7ImH <= taila && hOasmeEgUkb <= i9ihkmuEn5F) {
            if (choose[PTCp7ImH] != BtCLvim) {
                PTCp7ImH++;
                continue;
            }
            else {
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
                if (choose[taila] != BtCLvim) {
                    taila--;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    continue;
                }
                else {
                    if (bchoose[hOasmeEgUkb] == 1) {
                        hOasmeEgUkb++;
                        continue;
                    }
                    else {
                        if (bchoose[i9ihkmuEn5F] == 1) {
                            i9ihkmuEn5F--;
                            continue;
                        }
                        else {
                            if (a[PTCp7ImH] > b[hOasmeEgUkb]) {
                                choose[PTCp7ImH] = hOasmeEgUkb;
                                bchoose[hOasmeEgUkb] = 1;
                                IWdqOoS2h++;
                                PTCp7ImH++;
                                hOasmeEgUkb++;
                            }
                            else if (a[taila] > b[i9ihkmuEn5F]) {
                                choose[taila] = i9ihkmuEn5F;
                                bchoose[i9ihkmuEn5F] = 1;
                                i9ihkmuEn5F--;
                                IWdqOoS2h++;
                                taila--;
                            }
                            else {
                                choose[taila] = hOasmeEgUkb;
                                bchoose[hOasmeEgUkb] = 1;
                                if (a[taila] < b[hOasmeEgUkb])
                                    unehMTRKGE++;
                                else
                                    deuce++;
                                taila--;
                                hOasmeEgUkb++;
                            };
                        };
                    };
                };
            };
        }
        printf ("%d\n", money);
    };
}

