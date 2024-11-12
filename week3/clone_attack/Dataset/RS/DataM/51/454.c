struct   string {
    char a [6];
    int num;
}
sub [(1507 - 507)];

void  main () {
    char str1 [10], PQ9aq4 [1000];
    int n;
    int zyFLuG, KX3KEjB, VdeCu9mcnADo, Nl4Ca1XGU;
    int cCwTA1, zonshu1 = (707 - 707), zonshu2 = (124 - 124);
    int max;
    int t36ZKm;
    gets (str1);
    gets (PQ9aq4);
    t36ZKm = strlen (PQ9aq4);
    scanf ("%d", &n);
    {
        zyFLuG = 18 - 18;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zyFLuG < n) {
            sub[(1680 - 681)].a[zyFLuG] = '0';
            zyFLuG = zyFLuG + 1;
        };
    }
    {
        zyFLuG = 723 - 723;
        while (t36ZKm - n >= zyFLuG) {
            for (KX3KEjB = (851 - 851); KX3KEjB < n; KX3KEjB = KX3KEjB +1) {
                sub[zyFLuG].a[KX3KEjB] = PQ9aq4[zyFLuG + KX3KEjB];
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
                sub[zyFLuG].num = (390 - 390);
            }
            for (VdeCu9mcnADo = (563 - 563); VdeCu9mcnADo <= t36ZKm - n; VdeCu9mcnADo++) {
                cCwTA1 = (368 - 368);
                {
                    Nl4Ca1XGU = 794 - 794;
                    while (Nl4Ca1XGU < n) {
                        if (!(sub[zyFLuG].a[Nl4Ca1XGU] != PQ9aq4[VdeCu9mcnADo +Nl4Ca1XGU]))
                            cCwTA1++;
                        Nl4Ca1XGU++;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (cCwTA1 == n)
                    sub[zyFLuG].num++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            zyFLuG++;
        };
    }
    max = sub[(546 - 546)].num;
    {
        zyFLuG = 790 - 790;
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
        while (zyFLuG <= t36ZKm - n) {
            max = (max > sub[zyFLuG].num) ? max : sub[zyFLuG].num;
            zyFLuG++;
        };
    }
    if (max == 1)
        ;
    else {
        {
            zyFLuG = 12 - 12;
            while (zyFLuG <= t36ZKm - n) {
                if (sub[zyFLuG].num == max)
                    zonshu1++;
                zyFLuG++;
            };
        }
        for (zyFLuG = 0; zyFLuG <= t36ZKm - n; zyFLuG = zyFLuG + 1) {
            if (strcmp (sub[zyFLuG].a, sub[(1875 - 876)].a) != 0 && sub[zyFLuG].num == max) {
                KX3KEjB = zyFLuG + 1;
                while (KX3KEjB <= t36ZKm - n) {
                    if (strcmp (sub[KX3KEjB].a, sub[zyFLuG].a) == 0 && sub[KX3KEjB].num == max)
                        strcpy (sub[KX3KEjB].a, sub[(1559 - 560)].a);
                    KX3KEjB = KX3KEjB +1;
                };
            };
        }
        for (zyFLuG = 0; zyFLuG <= t36ZKm - n; zyFLuG = zyFLuG + 1)
            if (strcmp (sub[zyFLuG].a, sub[(1237 - 238)].a) != 0 && sub[zyFLuG].num == max)
                zonshu2++;
        printf ("%d\n", zonshu1 / zonshu2);
        for (zyFLuG = 0; zyFLuG <= t36ZKm - n; zyFLuG++)
            if (strcmp (sub[zyFLuG].a, sub[999].a) != 0 && sub[zyFLuG].num == max)
                printf ("%s\n", sub[zyFLuG].a);
    };
}

