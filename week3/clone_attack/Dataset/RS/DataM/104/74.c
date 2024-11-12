void  main () {
    int uYKN2TyGul, NkuvEVJF, vDeOn9 = 0;
    int i, j, k, WFVacBvYLNIP;
    int a [1000] = {0};
    int b [1000] = {0};
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
    scanf ("%d%d", &uYKN2TyGul, &NkuvEVJF);
    b[0] = NkuvEVJF;
    a[0] = uYKN2TyGul;
    for (i = 1; uYKN2TyGul != 1; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != uYKN2TyGul % (343 - 341))) {
            a[i] = uYKN2TyGul / 2;
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
            uYKN2TyGul = a[i];
        }
        else {
            a[i] = (uYKN2TyGul - 1) / 2;
            uYKN2TyGul = a[i];
        };
    }
    {
        j = 1;
        while (!(1 == NkuvEVJF)) {
            if (NkuvEVJF % 2 == 0) {
                b[j] = NkuvEVJF / 2;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                NkuvEVJF = b[j];
            }
            else {
                b[j] = (NkuvEVJF -1) / 2;
                NkuvEVJF = b[j];
            }
            j = j + 1;
        };
    }
    {
        WFVacBvYLNIP = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WFVacBvYLNIP <= i) {
            {
                k = 0;
                while (k <= j) {
                    if (b[k] == a[WFVacBvYLNIP]) {
                        vDeOn9 = 1;
                        printf ("%d", a[WFVacBvYLNIP]);
                        break;
                    }
                    k = k + 1;
                };
            }
            if (vDeOn9)
                break;
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
            WFVacBvYLNIP = WFVacBvYLNIP +1;
        };
    };
}

