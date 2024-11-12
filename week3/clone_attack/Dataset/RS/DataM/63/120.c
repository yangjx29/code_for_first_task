main () {
    int **PHenbS;
    int **WKfAJOu;
    int **wrfpUQi1;
    int HwR4XAEtmI, YqLJcaO09i, sJAtadS7, y4PouiHXhWV, bNEX3A, uU1WBVuwc, GzAlgs;
    scanf ("%d%d", &y4PouiHXhWV, &bNEX3A);
    PHenbS = (int **) malloc (y4PouiHXhWV * sizeof (int *));
    {
        HwR4XAEtmI = 753 - 753;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y4PouiHXhWV > HwR4XAEtmI) {
            PHenbS[HwR4XAEtmI] = (int *) malloc (bNEX3A * sizeof (int));
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
            HwR4XAEtmI = HwR4XAEtmI +1;
        };
    }
    {
        HwR4XAEtmI = 515 - 515;
        while (y4PouiHXhWV > HwR4XAEtmI) {
            {
                YqLJcaO09i = 0;
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
                while (YqLJcaO09i < bNEX3A) {
                    scanf ("%d", &PHenbS[HwR4XAEtmI][YqLJcaO09i]);
                    YqLJcaO09i = YqLJcaO09i +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            HwR4XAEtmI = HwR4XAEtmI +1;
        };
    }
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
    scanf ("%d%d", &uU1WBVuwc, &GzAlgs);
    WKfAJOu = (int **) malloc (uU1WBVuwc * sizeof (int *));
    {
        HwR4XAEtmI = 0;
        while (uU1WBVuwc > HwR4XAEtmI) {
            WKfAJOu[HwR4XAEtmI] = (int *) malloc (GzAlgs * sizeof (int));
            HwR4XAEtmI = HwR4XAEtmI +1;
        };
    }
    for (HwR4XAEtmI = 0; uU1WBVuwc > HwR4XAEtmI; HwR4XAEtmI = HwR4XAEtmI +1) {
        for (YqLJcaO09i = 0; GzAlgs > YqLJcaO09i; YqLJcaO09i++)
            scanf ("%d", &WKfAJOu[HwR4XAEtmI][YqLJcaO09i]);
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
        };
    }
    wrfpUQi1 = (int **) malloc (y4PouiHXhWV * sizeof (int *));
    {
        HwR4XAEtmI = 0;
        while (y4PouiHXhWV > HwR4XAEtmI) {
            wrfpUQi1[HwR4XAEtmI] = (int *) malloc (GzAlgs * sizeof (int));
            HwR4XAEtmI++;
        };
    }
    for (HwR4XAEtmI = 0; y4PouiHXhWV > HwR4XAEtmI; HwR4XAEtmI++) {
        YqLJcaO09i = 0;
        while (GzAlgs > YqLJcaO09i) {
            wrfpUQi1[HwR4XAEtmI][YqLJcaO09i] = 0;
            YqLJcaO09i++;
        };
    }
    for (HwR4XAEtmI = 0; y4PouiHXhWV > HwR4XAEtmI; HwR4XAEtmI++) {
        for (YqLJcaO09i = 0; GzAlgs > YqLJcaO09i; YqLJcaO09i++) {
            sJAtadS7 = 0;
            while (sJAtadS7 < uU1WBVuwc) {
                wrfpUQi1[HwR4XAEtmI][YqLJcaO09i] += PHenbS[HwR4XAEtmI][sJAtadS7] * WKfAJOu[sJAtadS7][YqLJcaO09i];
                sJAtadS7 = sJAtadS7 + 1;
            };
        };
    }
    {
        HwR4XAEtmI = 0;
        while (y4PouiHXhWV > HwR4XAEtmI) {
            printf ("%d", wrfpUQi1[HwR4XAEtmI][0]);
            {
                YqLJcaO09i = 1;
                while (YqLJcaO09i < GzAlgs) {
                    printf (" %d", wrfpUQi1[HwR4XAEtmI][YqLJcaO09i]);
                    YqLJcaO09i++;
                };
            }
            HwR4XAEtmI++;
            printf ("\n");
        };
    };
}

