void  main (int rWxY0OVXh, char *pirW7GTq6DvF []) {
    int cGgcVQzY6 = 0;
    int pozrb5 [100];
    int wJ3b61 [100];
    int vT2ZD0;
    int M9w1yV3cj;
    int j;
    int x;
    int n;
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
    struct   student {
        char OiPngY7 [10];
        int hgTxpm;
    }
    Ukg3AOXU [100], XbLYPeNK7CZ [100];
    scanf ("%d", &n);
    {
        vT2ZD0 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vT2ZD0 < n) {
            scanf ("%s", &Ukg3AOXU[vT2ZD0].OiPngY7);
            scanf ("%d", &Ukg3AOXU[vT2ZD0].hgTxpm);
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
            vT2ZD0 = vT2ZD0 + 1;
        };
    }
    for (vT2ZD0 = 0; vT2ZD0 < n; vT2ZD0++) {
        if (Ukg3AOXU[vT2ZD0].hgTxpm >= 60) {
            pozrb5[cGgcVQzY6] = Ukg3AOXU[vT2ZD0].hgTxpm;
            wJ3b61[cGgcVQzY6] = vT2ZD0;
            cGgcVQzY6++;
        };
    }
    {
        vT2ZD0 = 0;
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
        while (vT2ZD0 < cGgcVQzY6) {
            vT2ZD0++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (j = 0; j < cGgcVQzY6; j++) {
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
                if (pozrb5[j + 1] > pozrb5[j]) {
                    x = pozrb5[j];
                    pozrb5[j] = pozrb5[j + 1];
                    pozrb5[j + 1] = x;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    x = wJ3b61[j];
                    wJ3b61[j] = wJ3b61[j + 1];
                    wJ3b61[j + 1] = x;
                };
            };
        };
    }
    for (vT2ZD0 = 0; vT2ZD0 < cGgcVQzY6; vT2ZD0++) {
        M9w1yV3cj = wJ3b61[vT2ZD0];
        printf ("%s\n", Ukg3AOXU[M9w1yV3cj].OiPngY7);
    }
    for (vT2ZD0 = 0; vT2ZD0 < n; vT2ZD0++) {
        if (Ukg3AOXU[vT2ZD0].hgTxpm < 60) {
            printf ("%s\n", Ukg3AOXU[vT2ZD0].OiPngY7);
        };
    };
}

